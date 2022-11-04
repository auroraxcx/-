#include <stdio.h>
int main()
{
	int i,m;
	scanf("%d", &i);
	int a[i], n;
	a[0] = 1, a[1] = 1;
	printf("%d\n%d\n", a[0], a[1]);
	for (n = 2; n < i; n++)
	{
		a[n] = a[n - 1] + a[n - 2];
		printf("%d\n", a[n]);
	}
	scanf("%d",&m);
	printf("%d\n",a[m-1]);
	return 0;
}