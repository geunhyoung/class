'''
    page 155
    문제1
    프로그램 사용자로부터 양의 정수를 하나 입력받아
    그 수 만큼 Hello world 출력
'''

num = input("양의 정수 입력:")
print(num)

num=int(num)
print(type(num))

for i in range(num):
    print("hello word")
