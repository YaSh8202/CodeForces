

def format_time(minutes):
    minutes=minutes%(24*60)
    hours_total = minutes // 60
    # Get additional minutes with modulus
    minutes_total = minutes % 60
    # Create time as a string
    time_string = "{:02d}:{:02d}".format(hours_total, minutes_total)
    return time_string


for _ in range(int(input())):
    time, x = list(map(str, input().split()))
    x = int(x)
    h, m = time.split(':')
    total = int(h)*60 + int(m)
    s = total
    cnt=0
    y=x

    if(time==time[::-1]):
      cnt+=1

    while(1):
      s=total+y
      t = format_time(minutes=s)
      # print(t)
      if(t==time):
        break


      if(t == t[::-1]):
        cnt+=1
      
      y+=x

    
    print(cnt)