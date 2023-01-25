#include <stdio.h>

int main()
{
    int a[5], i;
    int max1, max, min1, min;
    int total;

    printf(" 정수 5개를 입력하시오:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    max = min = total = a[0];

    for(total=i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
        
        if(a[i]<min){
            min=a[i];
        }
        total += a[i];
    }

    printf("최대값: %d\n", max);
    printf("최소값: %d\n", min);

    printf("입력된 정수의 총 합:%d\n", total);
}
