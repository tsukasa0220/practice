#include <stdio.h>

int foo(int m, int n)
{
    int k = 0;
    while (n % m == 0) {
        k++;
        n = n / m;
    }
    return k;
}

int main(void) {
    int m, n, k;
    printf("正の整数 1 を入力してください: ");
    scanf("%d", &m);
    printf("正の整数 2 を入力してください: ");
    scanf("%d", &n);
    k = foo(m, n);
    printf("%d の %d 乗は %d を割り切ります。\n", m, k, n);

    return 0;
}