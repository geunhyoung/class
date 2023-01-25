#include <stdio.h>

/* 조건에 따른 흐른 분기
사용자가 1을 입력하면 1을 입력했네요 출력
아니면 1을 입력하지 않았네요 출력
*/

int main(){
    int num;
    printf("입력하세요");
    scanf("%d",&num);

    
    if (num==1){//만약 1과 같으면
        printf("1을 입력하셨네요");

    }
    else{//아니면 
        printf("1을 입력하지 않았네요...");

    }
}