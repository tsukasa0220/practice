#include <stdio.h>

int bar(const int v[], int n) 
{
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        if (sum < 0) {
            cnt++;
        }
    }
    return cnt;
}

int va[10] = { 1, -2, 3, -4, 5, -6, 7, -8, 9, -10 };
int vb[10] = { 1, -1, 2, -2, 3, -3, 4, -4, 5, -5 };
int vc[10] = { 5, 4, 5, -2, -4, -5, -3, -9, 7, 1 };

int main(void) {
    printf("va は和が負になるのは %d 回です。\n", bar(va, 10));
    printf("vb は和が負になるのは %d 回です。\n", bar(vb, 10));
    printf("vc は和が負になるのは %d 回です。\n", bar(vc, 10));

    return 0;
}