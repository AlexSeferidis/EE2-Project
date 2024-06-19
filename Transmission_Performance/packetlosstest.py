import ping3

def calculate_packet_loss(host, count):
    successful_pings = 0
    total_pings = count

    for _ in range(count):
        rtt = ping3.ping(host, timeout=2)
        if rtt is not None:
            successful_pings += 1

    packet_loss = ((total_pings - successful_pings) / total_pings) * 100
    return packet_loss, successful_pings, total_pings

if __name__ == "__main__":
    host = "http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080"
    count = 20
    packet_loss, successful_pings, total_pings = calculate_packet_loss(host, count)

    print(f"Packet Loss: {packet_loss}%")
    print(f"Successful Pings: {successful_pings}")
    print(f"Total Pings: {total_pings}")
