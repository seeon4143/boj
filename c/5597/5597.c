#include <stdio.h>

int main(){

    int n;
    int arr[]={0};

    for (int i=0;i<28;i++){
        scanf("%d",&n);
        arr[n-1]=n;
    }
    for (int i=0;i<30;i++){
        if(arr[i]==0)
            printf("%d\n",i+1);
    }

    return 0;
}