'''
    c언어 328p 도전1번 문제
    길이가 10일 배열을 선언하고
    총 10개의 정수를 입력받아서
    홀수 작수를 구분 하는 프로그램을 작성해보자

    2 4 1 3 9 10
    짝수 2, 4 10
    홀수 1, 3, 9

'''

list = []
holsu =[]
jjaksi=[]
for i in range(10):
    st= input(f"{i+1} 번째 입력")
    intst= int(st)
    list.append(int(st))
    if intst%2==0:
        jjaksi.append(intst)
    else:
        holsu.append(intst)

print(f"홀수{holsu}")
print(f"짝수{jjaksi}")

holus = [int(item) for item in list if int (item)%2==1]
print(f"홀수{holsu}")
jjaksi= [int(item) for item in list if int (item)%2==0]
print(f"짝수{jjaksi}")
print()


list= input("10진수를 입력하면 2진수로 변환:")
intlist= int(list)

int2= bin(intlist)
print(f"이진수: {int2}")
