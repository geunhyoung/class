#include<stdio.h>

int main(){
    int num=5;
    int* ptr;
    ptr = &num;//ptr 변수에 num주소값 투입

    printf("num의 값은 %d\n",num);
    printf("num의 주소값은 %d\n",&num);
    
    int arr[10] = {0};
    printf("arr의 주소값은 %d\n",arr);

}