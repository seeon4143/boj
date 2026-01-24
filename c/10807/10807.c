#include<stdio.h>
#include<stdlib.h>
int main() {
    // 코드 작성

    int n,v,sum=0;
    scanf("%d",&n);

    int *arr=(int *)malloc(sizeof(int)*n);
    
    for (int i =0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&v);
    
    for (int i =0; i<n;i++){
        if(arr[i]==v)
            sum+=1;
    }
    printf("%d\n",sum);

    free(arr);

    return 0;
}