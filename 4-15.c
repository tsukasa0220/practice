#include <stdio.h>
int main(void) {
    int from;
    int to;
    int add;
    printf("何cmから:"); scanf("%d",&from);
    printf("何cmまで:"); scanf("%d",&to);
    printf("何cmごと:"); scanf("%d",&add);
    for(int i=from;i<=to;i+=add){
        printf("%dcm　%.2fkg\n",i,(i-100)*0.9);
    }
    return 0;
}