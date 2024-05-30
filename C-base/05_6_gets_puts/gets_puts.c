#include "stdio.h"

int main(void){
    char c[20];

    gets(c);
    puts(c);//等价于 printf("%s\n",c);
    return 0;
}