#include <stdio.h>

int main(void) {
	
	int num;
	
	printf("整数を入力してください："); scanf("%d",&num);
	printf("その数に５を掛けて２を引くと%dです。\n",num*5-2);
	
    return 0;
}