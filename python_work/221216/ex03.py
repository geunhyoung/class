'''
c언어 도전 4번
'''
file1= open("result.text","a",encoding="UTF-8")

a=3500- 500- 700- 400
print(a)
# x y z 를 구해야되네요
#1900-(500*x +700*y + 400*z)==0
for x in range(5):
    for y in range(4):
        for z in range(5):
            if(1900-(500*x + 700*y + 400*z))==0:
                print(f"크림빵 ={x+1}, 새우깡 = {y+1} , 콜라 = {z+1}")
                file1.write(f"크림빵 ={x+1}, 새우깡 = {y+1} , 콜라 = {z+1}\n")


file1.close()
                # print(f"x = {x}y = {y}z = {z}")

print("무엇을 고를래?")

