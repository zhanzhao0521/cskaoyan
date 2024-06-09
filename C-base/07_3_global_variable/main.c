#include <stdio.h>

 int i=10;//i是一个全局变量，不建议使用

 void print(int i){ //局部变量跟全局变量重名，就近使用
     printf("I am print i=%d\n",i);
 }
 int main(void){
    int i=5;
    {
     int j=6; //局部变量只在离自己最近的大括号内有效
    }
    //printf("j=%d\n",j); //访问不到j
     for (int k = 0; k < -1;) {

     }
     //printf("k=%d\n",k);//k也是引用不到的
    printf("i=%d\n",i);
    print(3);

    return 0;
}
