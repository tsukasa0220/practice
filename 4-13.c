#include <stdio.h>
int main(void) {
    int n;
    int sum=0;
    printf("nの値:"); 
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("1から%dまでの総和は%dです。\n",n,sum);
    return 0;
}