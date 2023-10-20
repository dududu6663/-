#include <stdio.h>
int main()
{
	printf("你要好好学习吗？（1/0）");
	int a;
	scanf("%d",&a);
	if(a == 1)
	printf("好offer");
	else
	printf("卖红薯"); 
}//疑问1：为什么输入1，0以外的数字结果都是烤红薯？
//疑问2：如此修改代码： if(a == 0)
//						printf("卖红薯");
//						else
//						printf("好offer");  
//为什么得出的结论和疑问1一致？ 
 
