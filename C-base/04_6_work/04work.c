#include "stdio.h"

//判断一个数是否是对称数
//int main(void){
//
//    int i,tmp_i,a=0;
//    scanf("%d",&i);
//    tmp_i = i;
//    while (i){
//        a=a*10+i%10;
//        printf("a=%d\n",a);
//        i=i/10;
//        printf("i=%d\n",i);
//    }
//
//    if(a==tmp_i){
//        printf("yes\n");
//    }else{
//        printf("no\n");
//    }
//    return 0;
//}

//n! 获取n的阶乘
//int main(void){
//    int n,total=1;
//    scanf("%dn",&n);
//    while (n){
//       total*=n;
//       n--;
//    }
//    printf("%d\n",total);
//    return 0;
//}
//人民币100 换算10，5，2，1面值，正好40张且至少包含一张
int main(void){
    int a,b,c,d,result=0;
    for(a=1;a<=10;a++){
        for(b=1;b<=20;b++){
            for (c=1;c<=37;c++){
                for(d=1;d<=37;d++){

                    if(a+b+c+d==40 && a*10+b*5+c*2+d==100){
                        printf("a=%2d,b=%2d,c=%2d,d=%2d\n",a,b,c,d);
                        result+=1;
                    }
                }
            }
        }
    }
    printf("%d\n",result);
    return 0;
}