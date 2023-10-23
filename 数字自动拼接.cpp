#include <stdio.h>
int main()
{int a,b,c,t;
printf("请输入两个正整数："); 
scanf("%d %d", &a, &b);
int g,s,q,B;
g=(b-b%10)/10;
s=a%10;
B=b%10;
q=(a-a%10)/10;
t=1000*q+100*B+10*s+g;
printf("合并后的整数是：%d",t);
} 

