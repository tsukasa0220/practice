#include <stdio.h>

int main(void) {
	
	int x,y;
	
	printf("白玉の個数を入力してください:"); scanf("%d",&x);
	printf("赤玉の個数を入力してください:"); scanf("%d",&y);
	
    printf("白玉の割合は%d%%です。\n",100*x/(x+y));

    return 0;
}