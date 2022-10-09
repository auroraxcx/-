#include <stdio.h>
int main()
{
  int day = 0;
  scanf("%d", &day);
  if (day == 1 || day == 2 || day == 3 || day == 4 || day == 5)
    printf("休息日\n");
  else if (day == 6 || day == 7)
    printf("工作日\n");
  else
    printf("请输入数字1到7哦\n");
  return 0;
}