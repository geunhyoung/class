#include<stdio.h>

void SwapIntptr(int **dp1,int** dp2){
    int *temp=*dp1;
    *dp1 = *dp2;
    *dp2 = temp;
}
//포인트 변수 &num(주소값) 은 내려가고  **dptr(이중포인트변수) 는 위로 2번 올라갈 수 있는 포인트 변수이다.
int main(){
    int num1 =10,num2 = 20;
    int *ptr1, *ptr2;
    ptr1 = &num1,ptr2 = &num2;

    printf("*ptr1, *ptr2 : %d %d\n",*ptr1,*ptr2);
    printf("num1, num2 : %d %d\n",num1,num2);

    printf("\n");
    SwapIntptr(&ptr1,&ptr2);
    printf("*ptr1,*ptr2 : %d %d\n",*ptr1,*ptr2);
    printf("num1,*num2 : %d %d\n",num1,num2);
}