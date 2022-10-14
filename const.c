#include <stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if (year%4==0&&year%100!=0||year%400==0)
    printf("闰年");
    else
    printf("不是哟");    
return 0;
}