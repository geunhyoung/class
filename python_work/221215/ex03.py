'''
 input과 eval 함수를 사용하고
 함수프로그래밍을 해보겠습니다.

'''


import ex04

def inputEval():
    myinput=input("식을 입력하세요\n")
    print(eval(myinput))

if __name__=='__main__':
    print("실행했는 파일에서는...")
    print(__name__)
    inputEval()