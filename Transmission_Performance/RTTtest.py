import requests
import time
import statistics

def calculate_rtt(url, count):
    # store each run's RTT
    rtts = []
    
    # make count number of requests to the URL and measure time taken
    for _ in range(count):
        start_time = time.time()
        try:
            response = requests.get(url)
            end_time = time.time()
            if response.status_code == 200:
                rtt = end_time - start_time
                rtts.append(rtt)
        except requests.RequestException:
            pass
    
    # calculate average and standard deviation of RTTs
    if len(rtts) > 0:
        avg_rtt = statistics.mean(rtts)
        stddev_rtt = statistics.stdev(rtts)
        return avg_rtt, stddev_rtt

if __name__ == "__main__":
    count = 50 
    url = "http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080"
    avg_rtt, stddev_rtt = calculate_rtt(url, count)

    print(f"Average RTT: {avg_rtt:.4f} seconds")
    print(f"Standard Deviation of RTT: {stddev_rtt:.4f} seconds")




