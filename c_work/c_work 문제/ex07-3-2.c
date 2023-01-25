#include <stdio.h>
int main(){
    
    int num=0,total=0,i=0;

    do
    {
        total+=num;
        num+=2;
        /* code */
    } while (num<=100);
    printf("0에서 100 사이 숫자 중 짝수의 합: %d",total);
    return 0;

}