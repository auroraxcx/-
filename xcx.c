#include <stdio.h>
int main()
{
int flag = 1;
	int i = 0;
	double min;
	double pi;
	int count = 0;
	for (i = 1, flag = 1, pi = 0, min = 1 / 1000000,count = 0; (1.0 / i) >= min; i += 2, count++)
	{
		pi = pi + flag * (1.0 / i);
		flag = -flag;
	}
	pi = 4 * pi;
	printf("π的近似值为：%.10lf\n", pi);
	printf("%d\n", count);
  return 0;
}