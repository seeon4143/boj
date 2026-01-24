#include<stdio.h>
#include<stdlib.h>
int main() {
    // 코드 작성

    int T;
    int *a =malloc(sizeof(int)*T);
    int *b = malloc(sizeof(int)*T);
    scanf("%d",&T);
    for(int i=0; i<T;i++){
        scanf("%d %d",&a[i], &b[i]);
    }
    for(int i=0;i<T;i++){
        printf("%d\n",a[i]+b[i]);
    }

    free(a);
    free(b);
    return 0;
}