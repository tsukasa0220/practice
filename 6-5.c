#include <stdio.h>

int sumup(int a)
{
    int sum = 0;

    for (int i = 1; i <= a; i++) {
        sum += i;
    }
    return sum;
}

int main(void) 
{
    int a;

	printf("整数を入力してください：");
    scanf("%d", &a);

    printf("1から%dまでの全整数の和は%dです。\n", a, sumup(a));
    
    return 0;
}