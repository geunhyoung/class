#include<stdio.h>
int sum1(int n1, int n2){
    printf("덧셈을 수행합니다\n");
    return n1+n2;
}
int sum2(int n1, int n2){
    printf("뺄셈을 수행합니다\n");
    return n1-n2;
}
int sum3(int n1, int n2){
    printf("곱셈을 수행합니다\n");
    return n1*n2;
}
int sum4(int n1, int n2){
    printf("나눗셈을 수행합니다\n");
    return n1/n2;
}
int sum5(int n1, int n2){
    printf("나머지 구하기을 수행합니다\n");
    return n1%n2;
}

int main(){
    //사칙연산 함수 구현( 5가지)

    //1. 2개의 저수 입력받기

    printf("2개의 정수를 입력해주세요 ");
    int num1,num2;

    scanf("%d %d",&num1,&num2);
    rewind(stdin);//버퍼를 비워주는 문구

    //2.연산자 입력받기
    printf("연산자를 입력해주세요");
    char ch;
    scanf("%c",&ch);
    //3.사칙연산 함수 사용 sum 덧셈,sub 뺄셈,  mul 곱셈, div1 나눗셈, div2 나머지
    int result;
    switch (ch){
    case '+':result=sum1(num1,num2);
    //result 에 저장
        break;
    case '-':
        result=sum2(num1,num2);
   
        break;
    case '*':
        result=sum3(num1,num2);
   
        break;
    case '/':
        result=sum4(num1,num2);
   
        break;
    case '%':
        result=sum5(num1,num2);
   
        break;
    }
    printf("결과값은 %d입니다.\n",result);

}