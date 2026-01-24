#include<stdio.h>
#include<string.h>
int main() {
    // 코드 작성
    int T;
    char s[1001];

    scanf("%d",&T);

    for(int i=0; i<T;i++){
        scanf("%1000s",s);
        int len = strlen(s);
        printf("%c%c\n",s[0],s[len-1]);
    }

    return 0;
}