#include<stdio.h>

int main() {
    // 코드 작성

    int a,b,c;

    scanf("%d %d",&a, &b);
    scanf("%d",&c);

        
    printf("%d %d\n",(a+((b+c)/60))%24,(b+c)%60); // b분이랑 c분을 더해서 시간, 분 출력함.
        
    
    return 0;
}
