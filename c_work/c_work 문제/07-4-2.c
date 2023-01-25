#include <stdio.h>

int main(){
    int input,cnt,total;

    printf("계승할 정수를 입력하시오: ");
    scanf("%d",&input);

    printf("n! = 1");
    for(cnt=2;cnt<=input;cnt++){
        printf(" x %d",cnt);
    }
    return 0;

}