#include <stdio.h>

int main(){
    int arr[5];//5개의 배열 4바이트가 5개

    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    for( int i=0; i<5;i++){
        printf("arr[%d]= %d \n",i,arr[i]);
    }

}