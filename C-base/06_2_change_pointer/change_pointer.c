#include "stdio.h"

void change(int *j){
    *j = 5;//*j 等价于变量i，只是间接访问

}
int main(void){
    int i=10;
    printf("before change i=%d\n",i);
    //C语言的函数调用是值传递，实参赋值给形参 j=&i;
    change(&i);
    printf("after change i=%d\n",i);
    return 0;
}