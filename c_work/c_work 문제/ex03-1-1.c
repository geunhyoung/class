#include <stdio.h>

int main(){
//1번
    int result1, result2;
    int num1,num2,num3;
    
    printf("두개의 정수를 입력하세요: ");
    scanf("%d %d",&num1, &num2);

    result1 = num1-num2;
    result2 = num1*num2;

    printf("%d-%d=%d\n",num1,num2,result1);
    printf("%d * %d=%d\n",num1,num2,result2);


//2번
    printf("세 개의 정수를 입력하세요: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    result1= num1*num2+num3;

    printf("%d x %d + %d= %d\n",num1,num2,num3,result1);


//3번 
    printf("한 개의 정수를 입력하세요: ");
    scanf("%d",&num1);

    result1= num1*num1;

    printf("제곱:%d\n",result1);
    
    //4번

    
    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d",&num1, &num2);

    result1= num1/num2;
    result2= num1%num2;

    printf("몫: %d\n나머지: %d\n",result1,result2);

    //5번
    
    printf("세 개의 정수를 입력하세요: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    result1 = (num1-num2)*(num2+num3)*(num3%num1);
    printf("%d\n",result1);



    return 0;
}