#include <stdio.h>

int main(){
    char str[]={'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
    int strLen=sizeof(str)/sizeof(char);
    int i=0;

    for(i=0; i < strLen ;i++){
        printf("%c",str[i]);

    } 
    printf("\n");

}