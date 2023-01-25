#include <stdio.h>
/*
    문제1
    int arr []=1,2,3,4,5
    ptr 2씩 증가
*/
int main(){
    int arr[]= {1,2,3,4,5};
    int *ptr = arr;

    for( int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++){
        printf("arr[%d] = %d\n",i,ptr[i]);
    }
    for( int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++){
        ptr[i] = ptr[i] +2;

    }
    for( int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++){
        *(ptr+i) = *(ptr+i) +2;
    }
    for( int i = 0 ; i > -1 ; i++){
        *(ptr+i) = *(ptr+i) -1;
    }

    printf("\n");
    printf("ptr = %d\n",ptr);
    printf("ptr = %d\n",ptr);
    printf("ptr = %d\n",ptr);
    
    for( int i = 0 ; i < sizeof(arr)/sizeof(int) ; i++){
        printf("arr[%d] = %d\n",i,ptr[i]);
    }

}