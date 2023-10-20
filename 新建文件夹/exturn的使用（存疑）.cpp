#include <stdio.h>
extern int add(int,int);
int main()
{int a,b;
scanf("%d%d",&a,&b);
int c = add(a,b);
printf("%d",a);
}
