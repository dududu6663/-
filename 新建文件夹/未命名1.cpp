#include <stdio.h>
struct monster
{char name[20];
int atk;
int def;
char dsc[50];
 };
 
int main()
//{monster a={"sans",1,1,"����С�ĵ���,��֪����"};
//printf("%s\n",a.name);
//printf("������%d\n",a.atk);
//printf("������%d\n",a.def);
//printf("��%s��",a.dsc);
{monster a={"sans",1,1,"����С�ĵ���,��֪����"};
monster *b =&a;
printf("%s\n",b->name);
printf("������%d\n",b->atk);
printf("������%d\n",b->def);
printf("��%s��",b->dsc);
} 
