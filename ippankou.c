#include <stdio.h>
int main(void) {
    int no;
    printf("正の整数を入力してください:");
    scanf("%d",&no);
    for(int i=1;i<=no;i++){
        printf("第%d項は%d\n",i,i*i+7*i-19);
    }
    putchar('\n');
    return 0;
}