#define max(x,y)(x>y?x:y)
#include <stdio.h>
int main()
{int a,b,c;
scanf("%d%d",&a,&b);
c = max(a,b);//(x>y?x;y)
printf("%d",c);
}
