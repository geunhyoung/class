#include <stdio.h>

int main(){
    
    char str[] = "Good morning!";

    printf("sizeof(str)= %d\n",sizeof(str));

    str[12]='?';
    printf("str= %s\n",str);
    printf("str[13]= %c\n",str[13]);
    printf("str[13]= %d\n",str[13]);

}