import time
file1= open("result.txt","r",encoding="UTF=8")

while True:
    line = file1.readline()
    print("line")
    if not line:break
    time.sleep(1)#1초 쉬면서 작업

file1.close()