#include <stdio.h>

int main(void) {
    int no1,no2;
    puts("二つの０または正の整数を入力してください。");
    printf("整数１:"); scanf("%d",&no1);
    printf("整数２:"); scanf("%d",&no2);

    if(no1%2==0&&no2%2==0){
        puts("両方の数が偶数です。");
    }else{
        puts("少なくとも一方の数が偶数ではありません。");
    }
    
    return 0;
}