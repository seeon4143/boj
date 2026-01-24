#include<stdio.h>
#include <stdlib.h>
int main() {
    // 코드 작성
    char *s = malloc(sizeof(char)*101);

    if(s ==NULL) return 1;
    scanf("%s",s);
    int i=0;
    while(s[i]){
        i++;
    }
    printf("%d\n", i);
    free(s);
    return 0;
}