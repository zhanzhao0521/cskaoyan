#include <stdio.h>

struct student{
    int num;
    char name[20];
    char sex;
};

int main(void){

    struct student s={1001,"lele",'M'};
    struct student sarr[3]={1001,"lele1",'M',1002,"lele2",'M',1003,"lele3",'M'};
    struct student *p;
    p=&s;
    printf("%d %s %c\n",s.num,s.name,s.sex);
    printf("%d %s %c\n",(*p).num,(*p).name,(*p).sex);//方式1访问通过结构体指针去访问成员变量
    printf("%d %s %c\n",p->num,p->name,p->sex);//方式2访问通过结构体指针去访问成员变量 建议用这种
    p=sarr;
    printf("%d %s %c\n",p->num,p->name,p->sex);
    p=p+1;
    printf("%d %s %c\n",p->num,p->name,p->sex);
    return 0;
}
