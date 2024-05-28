#include "stdio.h"

int main(void){
    int i;
    char c;
    float f;
    scanf("%d",&i);
    printf("i=%d\n",i);
    fflush(stdin);//清空标准输入缓冲区
    scanf("%c",&c);
    printf("c=%c\n",c);
    scanf("%f",&f);
    printf("f=%f\n",f);
    return 0;
}