#include <stdio.h>
int add(inx,inty)
{int z;
z = x+y;
return z;
 } 
int main()
{int a,b,c;
scanf("%d%d",&a,&b);
c = add(a,b);
printf("%d",c);
}
//疑问：如果结果溢出，怎么才能得出准确的结果 
