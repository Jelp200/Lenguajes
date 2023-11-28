from scapy.all import IP, TCP, Raw, send

# Dirección IP de tu propia máquina
target_ip = "192.168.8.187"

# Puerto de origen y destino
src_port = 12345
dst_port = 80  # Puedes cambiarlo al puerto que desees

# Mensaje personalizado
custom_message = "ESIME Zacatenco | IPN | ICE"

# Crea un paquete TCP con la carga útil personalizada
packet = IP(dst=target_ip) / TCP(sport=src_port, dport=dst_port, flags="S", seq=1000) / Raw(load=custom_message)

# Envía el paquete
send(packet)
