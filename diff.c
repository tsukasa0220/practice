#include <stdio.h>

int main(void) {

int n1,n2;	
puts("二つの整数を入力してください。");
printf("整数１:"); scanf("%d",&n1);
printf("整数２:"); scanf("%d",&n2);

if (n1-n2>=-5)
printf("整数１と整数２の差は-5以上です。\n");
else
printf("整数１と整数２の差は-5以上ではありません。\n");
    
    return 0;
}