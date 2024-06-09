#include <stdio.h>

//当需要在子函数中修改主函数中变量的值，就用“引用”，不需要修改就不用
void modify_num(int *&p,int *q){//形参中写&，称为“引用”
    p=q;
}

int main(){
    int *p=NULL;
    int i=10;
    int *q=&i;
    modify_num(p,q);
    printf("after modify_pointer *p=%d\n",*p);
    return 0;
}