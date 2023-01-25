#include <stdio.h>

int main(){

    int num,total;


    while(num!=0){

    printf("정수 입력(0을 입력할 때 까지 더함):\n");
    scanf("%d",&num);

    total+=num;

    }


    printf("총 합: %d",total);

    return 0;
}