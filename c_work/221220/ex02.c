#include <stdio.h>

int main(){
    char str[100];
    int len;
    printf("문자열을 입력하세요\n");
    scanf("%s",str);

    for(int i=0; i<100;i++){
        // printf("i=%d\n",i);
        if(str[i]=='\0'){
            // printf("길이는=%d\n",i);
            len=i;
            break;
        }
    }
    if(len %2 == 0){
        for(int i=0;i<5 ; i++){
            printf("i=%d\n",i);
            char temp = str[i];
            str[i] = str[len-(i+1)];
            str[len-(i+1)]=temp;
        }
    // }
    // else{

    // }

    printf("%s\n",str);
    return 0;
}