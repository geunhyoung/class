#include <stdio.h>
void ex01()
{
    int input;

    printf("정수를 입력하시오:");
    scanf("%d", &input);

    printf("10진수: %d \n16진수: %x", input, input);
}

int ex02()
{
    int num1, num2;
    int cnt = 1;

    printf("두개의 정수를 입력하시오:");
    scanf("%d %d", &num1, &num2);

    for (; num1 < num2; num1++)
    {
        while (cnt < 10)
        {
            printf("%d x %d = %d\n", num1, cnt, num1 * cnt);
            cnt++;
        }
        cnt = 1;
        printf("\n");
    }
    for (; num1 > num2; num2++)
    {
        while (cnt < 10)
        {
            printf("%d x %d = %d\n", num2, cnt, num2 * cnt);
            cnt++;
        }
        cnt = 1;
        printf("\n");
    }
    while (num1 = num2)
    {
        while (cnt < 10)
        {
            printf("%d x %d = %d\n", num2, cnt, num2 * cnt);
            cnt++;
        }
        break;
    }
}

int ex03()
{
    int num1, num2, gcd;
    int i;

    printf("두개의 정수를 입력:");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        for (i = num1; i > 0; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                printf("최대공약수:%d", i);
                break;
            }
        }
    }
    if (num1 <= num2)
    {
        for (i = num2; i > 0; i--)
        {
            if (num2 % i == 0 && num1 % i == 0)
            {
                printf("최대공약수:%d", i);
                break;
            }
        }
    }
}

void ex04()
{
    int total = 3500, total1;
    int cream = 500, ce = 700, co = 400;
    int i = 1, j = 1, k = 1;

    while (total - ce * j - co * k >= i * cream)
    {
        while (total - cream * i - co * k >= j * ce)
        {
            while (total - cream * i - ce * j >= k * co)
            {
                printf("크림빵 %d개 ", i);
                printf("새우깡 %d개", j);
                printf("콜라 %d개\n", k);
                k++;
            }
            j++;
            k = 1;
        }
        i++;
        j = 1;
        k = 1;
        printf("\n");
    } // 3500>=(cream*i+ce*j+co*k)>3100 && i>0,j>0,k>0
}

void ex05()
{
    int i = 1, cnt;
    int pnum = 2;

    printf("소수:\t");
    for (cnt = 1; cnt < 11; pnum++)
    {

        for (i = 1; i <= pnum; i++)
        {
            if (pnum % i == 0 && i != 1 && pnum != i)
            {
                break;
            }
            else if (pnum == i)
            {
                printf("%d \t", pnum);
                cnt++;
            }
            else
                continue;
        }
    }
}

void ex06()
{
    int se, s, m, h;

    printf("초(s)를 입력하시오:");
    scanf("%d", &se);

    h = se / (60 * 60), m = se % (60 * 60) / 60, s = se - h * 3600 - m * 60;

    printf("[h:%d, m:%d, s:%d]", h, m, s);
}

int ex07(int n)
{
    int i = 1;
    int result = 1;
    for (; n > i; i++)
    {
        result = result * 2;
        if (result > n)
        {
            break;
        }
    }
    return i - 1;
}

int ex08(int n)
{
    int i = 1, result = 1;

    for (; n >= i; i++)
    {
        result = result * 2;
        if (n == i)
        {
            return result;
        }
    }
}

int main()
{
    /*   7번
    int n, result = 1, i;
    printf("숫자 입력:");
    scanf("%d", &n);

    printf("최대 k는 %d", ex07(n));
    */
    /*  8번
    int num;
    printf("정수 입력:");
    scanf("%d", &num);

    printf("2의 %d승은 %d", num, ex08(num));
    */
}