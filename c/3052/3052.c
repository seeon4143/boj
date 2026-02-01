#include <stdio.h>

int main(){

    int arr[42]={0};
    int n;
    for(int i=0; i<10;i++){
        scanf("%d",&n);
        arr[n%42]=1;
    }

    int sum=0;
    for (int i=0;i<42;i++){
        if (arr[i]==1) sum+=1;
    }

    printf("%d\n",sum);


    return 0;
}