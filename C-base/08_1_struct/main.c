#include <stdio.h>


struct student{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
};

int main(void){

    struct student s={1001,"lele",'M',20,85.4,"Shanghai"};
    struct student sarr[3];
    int i;
    s.num=1003;
    printf("%d %s %c %d %f %s\n",s.num,s.name,s.sex,s.age,s.score,s.addr);
    printf("--------------------------\n");
    for ( i= 0; i <3 ; i++) {
        scanf("%d%s %c%d%f%s",&sarr[i].num,sarr[i].name,&sarr[i].sex,&sarr[i].age,&sarr[i].score,sarr[i].addr);
    }
    for (i = 0; i <3 ; i++) {
        printf("%d %s %c %d %f %s\n",sarr[i].num,sarr[i].name,sarr[i].sex,sarr[i].age,sarr[i].score,sarr[i].addr);
    }
    return 0;
}
