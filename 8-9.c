#include <stdio.h>

int main(void)
{
    int ch, cnt = 0;
    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            cnt++;
        }
    }
    printf("行数は%d行です。\n", cnt);
    return 0;
}