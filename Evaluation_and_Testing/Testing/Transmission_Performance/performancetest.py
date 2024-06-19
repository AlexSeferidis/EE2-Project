import requests
import time
import statistics

def calculate_rtt_and_jitter(url, count):
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
    
    # calculate average, standard deviation of RTTs, and jitter
    if len(rtts) > 0:
        avg_rtt = statistics.mean(rtts)
        stddev_rtt = statistics.stdev(rtts)
        if len(rtts) > 1:
            jitter = statistics.mean([abs(rtts[i] - rtts[i - 1]) for i in range(1, len(rtts))])
        else:
            jitter = 0.0
        return avg_rtt, stddev_rtt, jitter
    else:
        return None, None, None

if __name__ == "__main__":
    count = 500 
    url = "http://ec2-18-130-114-167.eu-west-2.compute.amazonaws.com:8080"
    avg_rtt, stddev_rtt, jitter = calculate_rtt_and_jitter(url, count)

    if avg_rtt is not None:
        print(f"Average RTT: {avg_rtt:.4f} seconds")
        print(f"Standard Deviation of RTT: {stddev_rtt:.4f} seconds")
        print(f"Jitter: {jitter:.4f} seconds")
    else:
        print("Failed to calculate RTTs and jitter. No successful requests.")
