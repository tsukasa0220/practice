#include <stdio.h>

int main(void) {
    int no;
    printf("正の整数を入力せよ:"); scanf("%d",&no);
    int i=2;
    while(no>=2&&i<=no){
        printf("%d",i);
        i*=2;
    }
    printf("\n");
    return 0;
}