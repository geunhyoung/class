#include <stdio.h>

int main(){
    int num1 = 0;
    double num2 =1.2;

    printf("num1=%d\n",num1);
    printf("nu2 = %f\n",num2);

    printf("정수 입력:\n");
    scanf("%d\n",&num1);
    printf("실수 입력:\n");
    scanf("%lf\n",&num2);

    printf("num1= %d\n",num1);
    printf("num2= %f\n",num2);
}