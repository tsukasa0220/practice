#include <stdio.h>

int main(void) {
    int no;
    printf("１から８までの整数を入力してください:"); scanf("%d",&no);

    switch (no){
    case 1:puts("太陽系第１惑星は、水星です。"); break;
    case 2:puts("太陽系第２惑星は、金星です。"); break;
    case 3:puts("太陽系第３惑星は、地球です。"); break;
    case 4:puts("太陽系第４惑星は、火星です。"); break;
    case 5:puts("太陽系第５惑星は、木星です。"); break;
    case 6:puts("太陽系第６惑星は、土星です。"); break;
    case 7:puts("太陽系第７惑星は、天王星です。"); break;
    case 8:puts("太陽系第８惑星は、海王星です。"); break;
    default :printf("太陽系第%d惑星は、知られていません。\n",no); break;
    }
    
    return 0;
}