#include <stdio.h>

int main(void) {
	
int a,b;
puts("二つの整数を入力せよ。");
printf("整数A:"); scanf("%d",&a);
printf("整数B:"); scanf("%d",&b);

if (a-b>10||b-a>10){
    puts("それらの差は11以上です。");
}else {
    puts("それらの差は10以下です。");
}
    
    return 0;
}