#include <stdio.h>

void ex01(){
    int i,cnt;
    
    for(i=1;i<10;i++){
        if(i%2!=0)
            continue;

        for(cnt=1;cnt<10;cnt++){
            printf("%d x %d x = %d\n",i,cnt,i*cnt);
            if(i==cnt){
                printf("\n");
                break;
            }
        }
    }
}

void ex02(){
    int a=0,z=0;
    int result;

    for(;a<10;a++){
        for(;z<10;z++){
            if(a==z)
                continue;
            if(99==(a*10+z)+(z*10+a)){
                printf("%d%d + %d%d\n",a,z,z,a);

            }
        }
    }
}
int main(){
    ex01();
    ex02();
    
    return 0;
}


