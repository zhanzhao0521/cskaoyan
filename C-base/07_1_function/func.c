//
// Created by 17634 on 2024/6/2.
//
#include "func.h"
void print_message(){
    printf("how do you do\n");
    print_star(6);
}
int print_star(int i){
    printf("**********************\n");
    printf("print_star %d\n",i);
    return i+3;
}