#include <time.h>
#include <stdio.h>
int main()
{
srand(time(0));
int a = rand(0,100);
int b;
scanf("%d",&b);
printf("猜猜看啊"); 
if (a==b)
printf("对了"); 
while(a !=b)
{if 
(a>b)
{
printf("小了");
}
else 
{printf("大了");
 } 
}
 
}
