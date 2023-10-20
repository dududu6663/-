#include <stdio.h>
int max(int x,int y)  //关于max函数的优化：int max(int x,int y)
{if (x>y)
return x;
else
return y;
	}
int main()
{int a,b,c;
scanf("%d%d",&a,&b);
c = max(a,b);
printf("%d",c);

}


//
