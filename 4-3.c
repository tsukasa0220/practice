#include <stdio.h>

int main(void) {
   
   int no;
   printf("正の整数を入力せよ:"); scanf("%d",&no);
   int tmp=no;
   while(no>=0){
       printf("%d",no);
       no--;
   } 
   if(tmp>=0){
       printf("\n");
   }
    return 0;
}