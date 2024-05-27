//
// Created by 17634 on 2024/5/26.
//
#include "stdio.h"

#define PI 3+2 //定义一个常量

int main(void){
    int i = PI*2; //结果等于7 相当于3+2*2
    printf("i=%d\n",i); //输出
    printf("i sizeof=%d\n", sizeof(i)); // sizeof变量的大小
    return 0;
}