#include <stdio.h>

int main(void) {
	
double num;
printf("実数を入力してください:"); scanf("%lf",&num);
printf("対角線の長さが%fの正方形の一辺の長さは%fです。\n",num,num*0.70710678118);
    
return 0;
}