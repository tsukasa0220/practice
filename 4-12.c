#include <stdio.h>

int main(void) {
    int no;
    int cnt=0;
    do{
        printf("正の整数を入力せよ:");
        scanf("%d",&no);
        if(no<=0){
            puts("正でない数をを入力しないでください。");
        }
    }while(no<=0);
    printf("%dは",no);
    while(no>0){
       no/=10;
       cnt++; 
    }
    printf("%d桁です。\n",cnt);

    return 0;
}