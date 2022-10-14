#include <stdio.h>
int main()
{
  int age;
  scanf("%d",&age);
  if (age<12&&age>0)
  printf("年龄小于12\n");
  else if(age>65&&age<150)
  printf("年龄大于65\n");
  else if(age<=0)
  printf("别闹\n");
  else if(age>=150)
  printf("长寿\n");
  else
  printf("在12到65之间\n"); 
    return 0;
}
