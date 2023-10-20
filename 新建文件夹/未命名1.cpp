#include <stdio.h>
struct monster
{char name[20];
int atk;
int def;
char dsc[50];
 };
 
int main()
//{monster a={"sans",1,1,"最弱小的敌人,你知道的"};
//printf("%s\n",a.name);
//printf("攻击：%d\n",a.atk);
//printf("防御：%d\n",a.def);
//printf("“%s”",a.dsc);
{monster a={"sans",1,1,"最弱小的敌人,你知道的"};
monster *b =&a;
printf("%s\n",b->name);
printf("攻击：%d\n",b->atk);
printf("防御：%d\n",b->def);
printf("“%s”",b->dsc);
} 
