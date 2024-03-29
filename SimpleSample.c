﻿#include "svg.h"

int main(void){
    start();
    strokeWeight(1);

    /* 左上の長方形 */ 
    fill(hsl360(0, 50, 50));
    stroke(hsl360(120, 100, 100));
    rect(50, 50, 60, 40);

    /* 楕円 */
    fill(hsl360(120, 50, 50));
    stroke(hsl360(240, 100, 100));
    ellipse(140, 70, 30, 40);

    /* 三角 */
    fill(hsl360(240, 50, 50));    
    stroke(hsl360(0, 100, 50));
    triangle(170, 50, 170, 90, 200, 90);

    /* 右上の平行四辺形 */
    noFill();
    stroke(bw100(50));
    quad(190, 50, 220, 90, 250, 90, 220, 50);

    /* 左下の四本の弧 */
    stroke(hsl360(0, 100, 50));
    arc360(75, 130, 40, 40, 0, 90);
    stroke(hsl360(30, 100, 50));
    arc360(75, 130, 40, 40, 90, 180);
    stroke(hsl360(60, 100, 50));
    arc360(75, 130, 40, 40, 180, 270);
    stroke(hsl360(90, 100, 50));
    arc360(75, 130, 40, 40, 270, 360);

    /* 下の四本の線分 */
    stroke(hsl360(120, 100, 50));
    line(115, 110, 115, 150);
    stroke(hsl360(150, 100, 50));
    line(115, 150, 145, 150);
    stroke(hsl360(180, 100, 50));
    line(145, 150, 145, 110);
    stroke(hsl360(210, 100, 50));
    line(145, 110, 115, 110);

    /* 右下の文字列 */
    noStroke();
    textFont("Times New Roman", 9);
    fill(hsl360(240, 100, 50));
    text("ABCXYZ", 170, 120);
    textFont("Verdana", 10);
    fill(hsl360(270, 100, 50));
    text("19&#x231a;&#x2600;&#x2601;&#x2602;&#x2603;", 170, 130);
    fill(hsl360(300, 100, 50));
    text("&#x273f;&#x2661;&#x270c;&#x2620;&#x2655;&#x2708;", 170, 140);
    fill(hsl360(330, 100, 50));
    text("&#x2605;&#x2b20;&#x2b21;&#x2721;&#x263a;&#x2639;", 170, 150);
    finish();
    
    return 0;
}
