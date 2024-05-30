#include "stdio.h"
int main(void){

    int i,total;
    for (i=1,total=0; i<=100; i++) {
        if(total>2000){
            break;
        }
        total+=i;
    }
    printf("total=%d\n",total);
    return 0;
}