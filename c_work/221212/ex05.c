#include <stdio.h>

int main(){

    printf("숫자 입력: \n");
    int num;
    scanf("%d",&num);

    if (num >30){
        printf("%d는 30 보다 크다 \n",num);
    }
    
    else if (num >20){
        printf("%d는 20 보다 크다 \n",num);
    }
    
    else if (num >10){
        printf("%d는 10 보다 크다 \n",num);
    }
    
    else {
        printf("%d는 0 보다 크다 \n",num);
    }
}