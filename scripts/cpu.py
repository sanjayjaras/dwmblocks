import psutil

if __name__ == "__main__":
    freq = psutil.cpu_freq()
    perc = round(psutil.cpu_percent())
    freq = round(freq.current/1000, 1)
    temp = round(psutil.sensors_temperatures()["k10temp"][1].current)
    print("{}GHz {}% {}°C".format(freq, perc, temp))


