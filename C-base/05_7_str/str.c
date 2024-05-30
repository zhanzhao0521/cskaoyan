#include "stdio.h"
#include "string.h"

int mystrlen(char c[]){
    int i=0;
    while (c[i]){
        i++;
    }
    return i;
}

int main(void){
    int len;
    char c[20];
    char d[100]="world";
    char e[100];
    gets(c);
    puts(c);
    len=strlen(c);//统计字符串长度
    printf("len=%d\n",len);
    len=mystrlen(c);
    printf("mylen=%d\n",len);
    strcat(c,d);//把d中的字符串拼接到c中
    puts(c);
    strcpy(e,c);//c中的字符串复制到e
    puts(e);
    printf("c?d %d\n",strcmp(c,"how")); // 大于返回正值，相等返回0，小于返回负值
    return 0;
}