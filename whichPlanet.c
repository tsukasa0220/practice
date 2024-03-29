#include <stdio.h>

int whichPlanet(void)
{
    int n;
    printf("太陽系第何惑星ですか？1から8の整数を入力して下さい:");
    do {
        scanf("%d", &n);
        if (n < 1 || n > 8) {
            printf("太陽系第何惑星ですか？1から8の整数を入力して下さい:");
        }
    } while (n < 1 || n > 8);
    return n;
}

void showPlanet(int p)
{
    switch(p){
            case 1:printf("水星"); break;
            case 2:printf("金星"); break;
            case 3:printf("地球"); break;
            case 4:printf("火星"); break;
            case 5:printf("木星"); break;
            case 6:printf("土星"); break;
            case 7:printf("天王星"); break;
            case 8:printf("海王星"); break;
    }
}

int main(void)
{
    int rank[] = { 8, 6, 5, 7, 1, 2, 3, 4 };
    int p1, p2;
    printf("1つめは");   
    p1 = whichPlanet();
    printf("2つめは"); 
    p2 = whichPlanet();

    if (rank[p1 - 1] > rank[p2 - 1]) {
        
        int tmp = p1;
	    p1 = p2; 
        p2 = tmp;
    }

    showPlanet(p1);
    printf("のほうが");
    showPlanet(p2);
    puts("よりも大きいです。");

    return 0;
}