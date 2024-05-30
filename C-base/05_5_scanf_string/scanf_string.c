#include "stdio.h"

int main(void){
    char c[10];
    char d[10];
//    scanf("%s",c);//字符数组名c中存储了数组的起始地址，因此不需要取地址
//    printf("%s\n",c);
    scanf("%s%s",c,d);
    printf("c=%s,d=%s\n",c,d);
    return 0;
}