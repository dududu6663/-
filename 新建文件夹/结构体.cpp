#include <stdio.h>
struct book
{char name[20];
int price;
};
int main()
{book a={"人间失格",15};
printf("书名：%s\n价格:%d",a.name,a.price);
}

