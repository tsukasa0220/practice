#include <stdio.h>
int cube(int x) 
{
    return x * x * x;
}
int main(void) 
{
    int x;

	printf("整数を入力せよ：");
    scanf("%d", &x);

    printf("xの３乗は%dです。\n", cube(x));
    return 0;
}