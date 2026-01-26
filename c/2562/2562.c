#include <stdio.h>

int main(){

    int *arr=malloc(sizeof(int)*9);
    int max=0;
    int t=0;
    for(int i =0; i<9;i++){
    scanf("%d",&arr[i]);
    if(max < arr[i]){
        max = arr[i];
        t = i+1;
    }
}
printf("%d\n%d",max,t);

return 0;
}
