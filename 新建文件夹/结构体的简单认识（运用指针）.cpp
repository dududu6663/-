#include <stdio.h>
#include <string.h>
struct book
{char name[20];
int price;
};
int main()
{book a={"人间失格",55};
book* b=&a;
printf("书名为：%s\n",a.name);
printf("价格为：%d\n",a.price);
//printf("书名为：%s\n",(*b).name);
//printf("价格为：%d\n",(*b).price);
//printf("书名为：%s\n",b->name);
//printf("价格为：%d\n",b->price);
//(*b).price=15;
//printf("修改后价格为：%d\n",b->price);
//strcpy((*b).name, "hhh");//---------------对结构体变量中的name进行修改(因为name为字符串类型，所以不可以直接进行修改) 
//printf("%s",b->name);


}


