#include<stdio.h>

int main() {
    // 코드 작성

    int H, M;
    scanf("%d",&H);
    scanf("%d",&M);

    if(M<45){
        M=M+60-45;
        if(H==0){
            H=23;
        }
        else{
            H-=1;
        }
    }
    else{
        M-=45;
    }

    printf("%d %d\n",H,M);


    return 0;
}