#include <stdio.h>

int main(){
    char arr[100];
    int i=0,len=0;

    char temp;
    
    printf(" 단어를 입력하시오:");
    scanf("%s",arr);


    while(arr[len] != 0)
        len++;

    for(i=0;i<len/2;i++){
        temp=arr[i];
        arr[i]=arr[(len-i)-1];
        arr[len-(i+1)]= temp;
    }
    printf("%s",arr);
    return 0;
}