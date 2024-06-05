#include "stdio.h"

int main(void){
    int i=5;
    int *i_pointer;
    i_pointer=&i;
    printf("i=%d\n",i);
    printf("i_pointer=%d\n",*i_pointer);
    return 0;
}