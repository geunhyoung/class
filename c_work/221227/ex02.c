#include<stdio.h>

int mian(){
    int num =20;
    void *ptr = &num;

    // *ptr=30;

    // printf("num = %d\n",num);
    // printf("*ptr = %d\n",*ptr);

    int *ptr = NULL;
    ptr= (int*)malloc(4)
    ptr = &num;
    printf("num = %d\n",num);
    printf("*ptr = %d\n",*ptr);
}