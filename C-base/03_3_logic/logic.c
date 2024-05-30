#include "stdio.h"
int main(void){
    int year,i,j=6;
    while (scanf("%d",&year)){
        if(year%4==0 && year%100!=0 || year%400==0){
            printf("%d is leap year!\n",year);
        } else{
            printf("%d is not leap year!\n",year);
        }
    }
    i=!!j;
    printf("i value=%d",i);
}