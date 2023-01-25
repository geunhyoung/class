#include <stdio.h>

int main(){

    printf("숫자 입력: \n");
    int num;
    scanf("%d",&num);

    switch(num)
    {
        case 10:
            printf("num은 10입니다");
            break;
        
        case 20:
            printf("num은 20입니다");
            break;
        
        case 30:
            printf("num은 30입니다");
            break;

        default:
            printf("default...");
            break;
    }
}