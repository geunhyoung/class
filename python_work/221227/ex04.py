import time

#계속 반복적인 행하긴 해야하는데
#1초 마다 해라고 하면 cpu성능 저하를 피할 수 있다.
for i in range(10):
    time.sleep(i)
    print("test")

