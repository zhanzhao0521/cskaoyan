#include "stdio.h"

int main(void){
    int i,ret;
    char c;
    float f;
    scanf("%d",&i);
    printf("i=%d\n",i);
    fflush(stdin);//清空标准输入缓冲区
    scanf("%c",&c);
    printf("c=%c\n",c);
    scanf("%f",&f);
    printf("f=%f\n",f);
    ret = scanf("%d %c%f",&i,&c,&f); // 混合读取
    printf("i=%d,c=%c,f=%f",i,c,f);
    return 0;
}