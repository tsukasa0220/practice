#include <stdio.h>
int main(void) {
    int no;
    int a=2;
    printf("正の整数を入力してください:");
    scanf("%d",&no);
    for(int i=1;i<=no;i++){
        printf("第%d項は%d\n",i,a);
        a=2*a+7;
    }
    putchar('\n');
    return 0;
}