#include <stdio.h>

int scan(void)
{
    int tmp;
    static int cnt = 1;
    
    do {
        printf("整数%d；", cnt);
        scanf("%d", &tmp);
        if (tmp < 0) {
            puts("非負の整数で入力してください");
        }
    } while (tmp < 0);
    cnt++;
    return tmp;
}

int gcd(int x, int y)
{
    if (y != 0 && x % y > 0) {
        return gcd(y, x % y);
    } else {
        return y;
    }
}

int main(void)
{
    puts("非負の整数を入力してください");
    int x = scan();
    int y = scan();

    printf("最大公約数は%dです。\n", gcd(x >= y ? x : y, x >= y ? y : x));

    return 0;
}