#include <stdio.h>
#include <stdlib.h>
int main(){

    int N, M;
    int i,j,k;
    
    scanf("%d %d",&N, &M);
    int *arr= calloc(N, sizeof(int));

    for (int x=0;x<M;x++){
        scanf("%d %d %d",&i, &j, &k);
        for (int y=i-1;y<=j-1;y++){
            arr[y]=k;
        }
    }
    for (int i=0;i<N;i++) printf("%d ",arr[i]);
printf("\n");


    return 0;
}