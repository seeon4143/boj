#include<stdio.h>

int main() {
    // 코드 작성
    int N;
    scanf("%d",&N);

    int arr[N];
    int max=-1000000, min=1000000;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]) max=arr[i];
        if(min>arr[i]) min=arr[i];
    }
    printf("%d %d\n",min, max);
    return 0;
}