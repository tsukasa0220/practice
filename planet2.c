#include <stdio.h>

int main(void) {
    int no;
    do{
        printf("1から8の整数を入力してください:");
        scanf("%d",&no);
        switch(no){
            case 1:puts("太陽系第1惑星は、水星です。"); break;
            case 2:puts("太陽系第2惑星は、金星です。"); break;
            case 3:puts("太陽系第3惑星は、地球です。"); break;
            case 4:puts("太陽系第4惑星は、火星です。"); break;
            case 5:puts("太陽系第5惑星は、木星です。"); break;
            case 6:puts("太陽系第6惑星は、土星です。"); break;
            case 7:puts("太陽系第7惑星は、天王星です。"); break;
            case 8:puts("太陽系第8惑星は、海王星です。"); break;
        }
    }while (no<1||no>8);

    return 0;
}