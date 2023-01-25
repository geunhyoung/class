#include <stdio.h>

int main(){
    int cur =2;
    int is= 0;

    // while(cur<10)
    // {
    //     is=1;
    //     while(is<10)
    //     {
    //         printf("%dx %d = %d \n",cur,is,cur*is);
    //         is++;
    //     }
    //     cur++;// 다음 단으로 넘어가지 위한 증가

    // }

    do
    {
        is=1;
        do
        {
            printf("%d x %d = %d \n",cur,is,cur*is);
            is++;
            /* code */
        } while (is<10/* condition */);
        cur++;
        /* code */
    } while (cur<10);
    
    return 0;
}