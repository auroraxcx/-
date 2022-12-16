#include <stdio.h>
int main()
{
	int gcd(int x, int y);
	int lcm(int x, int y);
	int a, b;
	int G, L;
	scanf("%d,%d", &a, &b);
	G = gcd(a, b);
	printf("G=%d\n", G);
	L = lcm(a, b);
	printf("L=%d\n", L);
	return 0;
}
int gcd(int x, int y)
{
	int m;
	m = x % y;
	for (; m != 0; m = x % y)
	{
		x = y;
		y = m;
	}
	return (y);
}
int lcm(int x, int y)
{
	int t, n;
	int gcd(int x, int y);
	t = gcd(x, y);
	n = x * y / t;
	return (n);
}
