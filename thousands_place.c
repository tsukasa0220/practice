#include <stdio.h>

int main(void) {
	
	int num;
	
	printf("正の整数を入力してください："); scanf("%d",&num);
	
	printf("その千の位の数字は%dです。\n",num/1000%10);

    return 0;
}