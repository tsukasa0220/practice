#include <stdio.h>

int main(void) {
    int no;
    printf("正の整数を入力してください:");
    scanf("%d",&no);
    int i=1;
    while(i<no){
        printf("%d",i);
        i*=2;
    }
    puts("");

    return 0;
}