#include <stdio.h>
#include <stdlib.h>

int main(){

    int N;
    scanf("%d",&N);

    char *s=malloc(sizeof(char)*(N+1));
    scanf("%s",s);

    int sum=0;
    for(int i=0; i<N;i++){
        sum +=(s[i]-'0');
    }

    printf("%d\n",sum);

    free(s);

    return 0;
}