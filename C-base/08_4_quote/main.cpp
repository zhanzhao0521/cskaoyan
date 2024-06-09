#include <stdio.h>

//当需要在子函数中修改主函数中变量的值，就用“引用”，不需要修改就不用
void modify_num(int &b){//形参中写&，称为“引用”
    b=b+1;
}

int main(){
    int a=10;
    modify_num(a);
    printf("after modify_num a=%d\n",a);
    return 0;
}