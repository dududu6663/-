#include <stdio.h>
extern int add(int,int);
int main()
{int a,b,c;
scanf("%d%d",&a,&b);
c = add(a,b);
printf("%d",c);
}
