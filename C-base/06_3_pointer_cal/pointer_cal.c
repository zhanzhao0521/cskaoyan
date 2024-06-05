#include "stdio.h"

#define N 5
int main(void){
    int a[N]={1,2,3,4,5};
    int *p;
    p=a;
    for (int i = 0; i < N; ++i) {
        printf("%3d",*(p+i));
    }
    printf("\n-------------------\n");
    p=&a[4];
    for (int i = 0; i <N ; ++i) {
        printf("%3d",*(p-i));
    }
    return 0;
}