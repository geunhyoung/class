'''
    c언어 도전2번
    두개의 정수를 입력받아서 최대 공약수를 구하는 프로그램을 작성
'''
    

num1= input('정수입력')
num2= input('정수입력')

print(num1)
print(num2)


num1=eval(num1)
num2=eval(num2)

sma= num2 if num1>num2 else num1
big = num2 if num1<num2 else num1
gcm =1

for i in range(1,sma+1):
    if sma % i ==0 and big%i ==0:
        gcm =i
        
text= f"최대공략수는 {gcm}입니다\n"

print(text) 

file1=open("result.txt","a",encoding="UTF-8")
file1.write(text)
file1.close()