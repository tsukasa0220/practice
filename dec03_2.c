#include <stdio.h>
int main(void) {
    int no, cnt = 0;
    printf("正の整数を入力してください:");
    scanf("%d", &no);
    for(int i = 1; i <= no; i++) {
        for(int j = 1; j <= no - i + 1; j++) {
            cnt++;
            if(cnt % 7 == 0) {
                putchar('*');
            } else {
                printf("%d", j % 10);
            }
        }
        putchar('\n');
    }
    printf("end\n");
    return 0;
}