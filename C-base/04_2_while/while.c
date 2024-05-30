#include "stdio.h"
int main(void){

    int i=1,total=0;
    while (i<=100){
        total+=i;
        i+=1;
    }
    printf("total=%d\n",total);
    return 0;
}