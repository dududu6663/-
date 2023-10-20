#include <stdio.h>
int main()
{float p,d,s;
printf("请输入原价和折扣率(,分隔)：");
scanf("%f,%f",&p,&d);
s =p*(1-d/100);
printf("商品的实际售价是：%.2f",s);



}
