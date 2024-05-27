//
// Created by 17634 on 2024/5/26.
//
#include "stdio.h"

//强制类型转换
int main(){
    int i=5;
    float f=i/2; //左右操作数i,2都是整型，所以结果也是整型
    float f1=(float)i/2; //将i转换成float,所以结果也是float
    printf("f=%f\n",f);
    printf("f1=%f\n",f1);
    return 0;
}