#include <stdio.h>

int main(){
    char arr[100];
    int len;
    int i=0;

    printf(" 단어를 입력하시오:");
    scanf("%s",&arr);


    for(i=0;i<100;i++){
        if(arr[i]== '\0'){
            len= i;
            break;
        }
    }

    printf("단어의 길이: %d",len);
    // for(i=0; i<arrLen ; i++){

    // }
    return 0;
}