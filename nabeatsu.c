#include <stdio.h>
int main(void) {
    int no1, no2, i, j;
    printf("整数１を入力してください:");
    scanf("%d", &no1);
    printf("整数２を入力してください:");
    scanf("%d", &no2);
    
    for(i = no1; i <= no2; i++) {
        printf("%d", i);
        j = i;
        if(j % 3 == 0) {
            printf("^^;");     
        } else {
            if(j < 0) {
                j = -j;
            }
            while(j > 0) {
                if(j % 10 == 3) {
                    printf("^^;");
                    break;
                }
                j /= 10;
            }
        }
        putchar(' ');
    }
    putchar('\n');

    return 0;
}