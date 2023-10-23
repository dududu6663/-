#include <stdio.h>
int main()
{int day=0;
scanf("%d",&day);
printf("你输入的day是:%d\n", day);
switch(day)
{
case 1:
case 2:
case 3:
case 4:
case 5:
printf("工作日");
break;
case 6:
case 7:
printf("休息日");
}
}
