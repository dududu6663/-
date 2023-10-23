#include <stdio.h>
int main()
{float a,b;
printf("请输入华氏温度：");
scanf("%f",&a);
b = (a-32)*5/9;
printf("摄氏温度是：%.1f",b);
}
