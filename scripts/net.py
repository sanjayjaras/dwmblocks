import psutil
import sys
import pathlib
#import datetime
import ast

fname = "net.txt"
kb = 1024
mb = kb * kb
gb = mb * kb

def format_speed(speed:int)->str:
    if speed > gb:
        return str(round(speed/gb))+"GB"
    elif speed > mb:
        return str(round(speed/mb))+"MB"
    elif speed > kb:
        return str(round(speed/kb))+"KB"
    else:
        return str(round(speed/mb))+"B"

if __name__ == "__main__":
    interval = int(sys.argv[1])

    fname = pathlib.Path(fname)

    #now = datetime.datetime.now()
    #file_time = now - datetime.timedelta(seconds=interval+1)
    
    net = psutil.net_io_counters(pernic=True)
    down = net["wlp37s0"].bytes_recv 
    up = net["wlp37s0"].bytes_sent

    #and datetime.datetime.fromtimestamp(fname.stat().st_ctime)>file_time
    if fname.exists():
        dictionary = {}
        with open(fname, "r") as txt_file:
            data = txt_file.read()
            dictionary = ast.literal_eval(data)
        with open(fname, "w") as txt_file:
            data = {"down":down, "up":up}
            txt_file.write("{}".format(data))

        down_byte_sec = (down - dictionary["down"]) / interval
        up_byte_sec = (up - dictionary["up"])  / interval
        print("\uf103", format_speed(down_byte_sec), "\uf102", format_speed(up_byte_sec))

    else:
        with open(fname, "w") as txt_file:
            data = {"down":down, "up":up}
            txt_file.write("{}".format(data))
    
