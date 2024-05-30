#include "stdio.h"
//逻辑与和逻辑或 短路运算
int main(void){
    int i=0;
    i&&printf("hello world!");//当i为假时，不会执行逻辑与后的表达式，称为短路运算
    i=1;
    i||printf("hello world!");//当i为真时，不会执行逻辑或后的表达式
    return 0;
}