#include <stdio.h>

int f(int n){
    if(n==1){
        return 1;
    }
    return n*f(n-1);
}

int step(int n){
    if(n==1||n==2){
        return n;
    }
    return step(n-1)+ step(n-2);
}
int main(void){
     int n;
    scanf("%d",&n);
    //printf("f(%d)=%d\n",n,f(n));
    printf("step(%d)=%d",n, step(n));
    return 0;
}
