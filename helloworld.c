#define π 3.1415936
#include <stdio.h>
int main()
{ float r,h,a,b,c,d,e;
scanf("%f%f",&r,&h);
a=2*π*r;
b=π*r*r;
c=4*π*r*r;
d=4/3*π*r*r*r;
e=π*r*r*h;
printf("圆周长是%.2f\n",a);
printf("圆面积是%.2f\n",b);
printf("圆球表面积是%.2f\n",c);
printf("圆球体积是%.2f\n",d);
printf("圆柱体积是%.2f\n",e);
return 0;
}
