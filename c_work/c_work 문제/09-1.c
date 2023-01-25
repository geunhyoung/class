#include<stdio.h>
//가장 큰 수 반환
int retbvalue(int a,int b, int c){
    if (a > b)
    {
        if( a>c){
            return a;
        }else{
            return c;
        }

    }
    else{
        if(b>c){
            return b;

        }
        else{
            return c;

        }
    }
    return b;
}
// 가장 작은수 반환
int retsvalue(int a,int b, int c){
    if(a>b){
        if(b>c){
            return c;
        }
        else 
        return b;
    }
    else{
        if(a>c){
            return c;
        }
        else{
            return a;
        }
    }
    return a;
}

double CelToFah(double cel){
    return 1.8*cel+32;
    
}
double FahToCel(double fah){
    return (fah-32)/1.8;
}
int pe(int n){
// 0  1 0+1 1+1 1+2 2+3
    int p1=0,p2=1,p3,p4;
    for(int i=1;n>=i;i++){
        
        printf("%d\t",p1);
        p2=p1+p2;
        p1=p2-p1;

        
    }
}
int main(){
 
    
    // 1번문제
    // printf("가장 큰 수 %d\n",retbvalue(5,10,3));
    // printf("가장 큰 수 %d\n",retbvalue(10,5,3));
    // printf("가장 큰 수 %d\n",retbvalue(5,7,10));
    // printf("가장 작은 수 %d\n",retsvalue(5,10,3));
    // //2번문제
    // int num;
    // double num1;

    // printf("1.화씨 구하기, 2.섭씨 구하기\n 어느것을 할지 번호를 적으시오:");
    // scanf("%d",&num);

    // if(num==1){
    //     printf("섭씨 온도입력:");
    //     scanf("%lf",&num1);

    //     printf("%.2f",CelToFah(num1));
    // }
    // else if(num==2){
    //     printf("화씨온도 입력");
    //     scanf("%lf",&num1);

    //     printf("%.2f",FahToCel(num1));
    // }
    // else 
    // printf("입력 오류");
    

    //3번문제
    //pe(7);

}