#include <stdio.h>
#include <string.h>
struct book
{char name[20];
int price;
};
int main()
{book a={"�˼�ʧ��",55};
book* b=&a;
printf("����Ϊ��%s\n",a.name);
printf("�۸�Ϊ��%d\n",a.price);
//printf("����Ϊ��%s\n",(*b).name);
//printf("�۸�Ϊ��%d\n",(*b).price);
//printf("����Ϊ��%s\n",b->name);
//printf("�۸�Ϊ��%d\n",b->price);
//(*b).price=15;
//printf("�޸ĺ�۸�Ϊ��%d\n",b->price);
//strcpy((*b).name, "hhh");//---------------�Խṹ������е�name�����޸�(��ΪnameΪ�ַ������ͣ����Բ�����ֱ�ӽ����޸�) 
//printf("%s",b->name);


}


