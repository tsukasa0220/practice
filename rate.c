#include <stdio.h>

int main(void) {
    int cnt1=0;
    int cnt=-1;
    int no;
    do{
        printf("整数を入力してください（負の数で入力終了）:"); 
        scanf("%d",&no);
        if(no>=50){
            cnt1++;
        }
        cnt++;
    }while(no>=0);

    printf("50以上の数の割合は%f%%です\n",(double)cnt1/cnt*100);
    return 0;
}