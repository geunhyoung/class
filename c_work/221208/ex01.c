#include <stdio.h>

int main(){

    int num1,num2,num3;

    printf("숫자 입력:");
    scanf("%d",&num1);
    printf("숫자 입력:");
    scanf("%d",&num2);
    printf("숫자 입력:");
    scanf("%d",&num3);
    printf("num1= %d num2 = %d num3 = %d\n",num1,num2,num3);

    printf("(%d-%d)*(%d+%d)*(%d %% %d)=%d"
    ,num1,num2,num2,num3,num3,num1,
    (num1-num2)*(num2+num3)*(num3%num1));
    

}