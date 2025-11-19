/*
** #########################################################################################
**      Archivo: 01 - 09 - MMDU.c
**      SO: Windows 11
**      Herramienta: Visual Studio Code
**      Descripcion:
**          Demo de un manejador de memoria definido por el usuario (arena simple).
** #########################################################################################
*/

// DIRECTIVAS DE PREPROCESADOR
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*
 Simple memory manager demo (MMDU) - arena allocator

 This is a minimal demonstration of a user-managed allocator.
 It keeps a single free list stored inside a static arena buffer.
 The control block is stored immediately before the user pointer returned.
 This is educational code — not production-ready.
*/

typedef struct block {
	size_t size;           /* size available for the user (bytes) */
	struct block *next;    /* next free block */
	int free;              /* 1 if free, 0 if allocated */
} block_t;

/* Static arena: ~64 KiB for demonstration */
static unsigned char arena[64 * 1024];
static block_t *free_list = NULL;

static void mmdu_init(void) {
	free_list = (block_t*)arena;
	free_list->size = sizeof(arena) - sizeof(block_t);
	free_list->next = NULL;
	free_list->free = 1;
}

static void *my_malloc(size_t size) {
	if (!free_list) mmdu_init();

	block_t *prev = NULL;
	block_t *cur = free_list;
	while (cur) {
		if (cur->free && cur->size >= size) {
			/* If space left after allocation is large enough, split the block */
			size_t remaining = cur->size - size;
			if (remaining > sizeof(block_t) + 8) {
				/* Create a new block header after the allocated area */
				block_t *newb = (block_t*)((unsigned char*)(cur + 1) + size);
				newb->size = remaining - sizeof(block_t);
				newb->next = cur->next;
				newb->free = 1;
				cur->size = size;
				cur->next = newb;
			}
			cur->free = 0;
			return (void*)(cur + 1);
		}
		prev = cur;
		cur = cur->next;
	}
	return NULL; /* no space */
}

static void my_free(void *ptr) {
	if (!ptr) return;
	block_t *hdr = ((block_t*)ptr) - 1;
	hdr->free = 1;
	/* Simple coalescing pass: merge adjacent free blocks in the free list */
	block_t *cur = free_list;
	while (cur && cur->next) {
		unsigned char *end_cur = (unsigned char*)(cur + 1) + cur->size;
		if (cur->free && cur->next->free && end_cur == (unsigned char*)cur->next) {
			/* merge */
			cur->size += sizeof(block_t) + cur->next->size;
			cur->next = cur->next->next;
			continue; /* try merging again at same cur */
		}
		cur = cur->next;
	}
}

int main(void) {
	printf("MMDU demo: arena size = %zu bytes\n", sizeof(arena));

	void *p1 = my_malloc(128);
	void *p2 = my_malloc(1024);
	void *p3 = my_malloc(2048);

	printf("p1=%p p2=%p p3=%p\n", p1, p2, p3);

	my_free(p2);
	printf("liberado p2 (%p)\n", p2);

	void *p4 = my_malloc(512);
	printf("p4=%p (debe reusar espacio de p2 si hay suficiente)\n", p4);

	my_free(p1);
	my_free(p3);
	my_free(p4);

	printf("fin del demo\n");
	return 0;
}