#include <stdio.h>

int sqr(int x)
{
    return x * x;
}

int pow4(int x)
{
    return sqr(x) * sqr(x);
}

int main(void) 
{
    int x;

    printf("整数を入力せよ：");
    scanf("%d", &x);

    printf("xの４乗は%dです。\n", pow4(x));
	
    return 0;
}