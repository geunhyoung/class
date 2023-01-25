#include <stdio.h>

int main(){
    int num1;
    printf("정수를 입력해주세요: ");
    scanf("%d",&num1);

    num1=~num1+1;

    printf("부호를 바꾼 값 = %d",num1);



    return 0;
}