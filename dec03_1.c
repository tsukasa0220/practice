#include <stdio.h>
int main(void) {
    int i;
    for(i = 1; i <= 60; i++) {
        if(i % 7 == 0 || i % 11 == 0) {
            continue;
        }
        printf("%dの3倍は%d、5倍は%dです。\n", i, i * 3, i * 5);
    }  
    return 0;
}