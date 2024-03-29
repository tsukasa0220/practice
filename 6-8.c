#include <stdio.h>

#define NUMBER 5

int min_of(const int v[], int n)
{
    int min = v[0];
    int cnt = 0;
    for (int i = 1; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
        }
        cnt++;
    }
    return min;
}

int main(void)
{
    int a[NUMBER];

    for (int i = 0; i < NUMBER; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("最小値は%dです。\n", min_of(a, NUMBER));

    return 0;
}