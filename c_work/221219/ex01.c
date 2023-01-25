#include <stdio.h>

void main()
{

    int i = 0;
    int cnt = 4;
    printf("2 3 ");


    while (i != 10)
    {
       
        // 세번 이상 나누어 떨어지면 소수가 아닌 것으로 판별
        // 4,1,2,4 로 나누어 떨어진다...
        // 그러므로 2와 3으로 나우었을때 한번이라도
        // 나누어 떨어지면 소수가 아니다..
        for (; cnt < 30; cnt++)
        {
            if (cnt % 2 == 0 || cnt % 3 == 0 || cnt %5 ==0)
            {
                printf("%d 소수가 아님 \n", cnt);
            }
            else
            {
                printf("%d 소수 \n", cnt);
                
            }
        }
        i++;
        cnt++;
    }
}
