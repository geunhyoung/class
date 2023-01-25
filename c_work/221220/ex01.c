#include<stdio.h>

void main(){
    int min,max,total=0;


    int arr[5];

    for(int i=0; i<5;i++){
        printf("정수 입력");
        scanf("%d",&arr[i]);
        total += arr[i];
    }
    for(int i=0;i<5;i++){
        if(min>arr[i]);
            min=arr[i];
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    printf("\n");
    printf("total= %d=\n",total);
    printf("max=%d\n",max);
    printf("min=%d\n",min);

}
