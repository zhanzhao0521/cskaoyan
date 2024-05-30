#include "stdio.h"

void print(char d[]){
    int i=0;
    while (d[i]){
        printf("%c",d[i]);
        i++;
    }
    printf("\n");
}

int main(void){
    char c[6]="hello";
    printf("%s\n",c);
    char d[5]="how";
    print(d);
    return 0;
}