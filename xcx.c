#include <stdio.h>
int main()
{
  double a,b,max;
  scanf("%lf%lf", &a,&b);
  max=(a>b)?a:b;
  printf("%lf",max);
  return 0;
}