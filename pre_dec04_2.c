#include <stdio.h>
int main(void) {
    int no;
    printf("正の整数を入力してください:");
    scanf("%d",&no);

    int cnt=no;
    for(int i=0;no>0;i++){
        printf("%d",i%7);
        cnt--;
        if(cnt==0){
            putchar('\n');
            no-=2;
            cnt=no;
        }
    }
    printf("end\n");
    return 0;
}