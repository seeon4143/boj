#include <stdio.h>

int main(){
    int A,B;

    do{
        scanf("%d %d",&A, &B);
        if(A==0 && B==0)
        break;
        printf("%d\n",A+B);
    }while (1);

}