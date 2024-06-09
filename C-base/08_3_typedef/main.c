#include <stdio.h>

//stu 等价于  struct student，pstu等价于struct student*
typedef struct student{
    int num;
    char name[20];
    char sex; 
}stu,*pstu;
typedef int INTEGER;
int main(void){

    //struct student s={1001,"lele",'M'};
    stu s = {1001,"lele",'M'};
    stu *p = &s;
    pstu p1 = &s;
    INTEGER num = 10;
    printf("num=%d,p->num=%d\n",num,p1->num);

    return 0;
}
