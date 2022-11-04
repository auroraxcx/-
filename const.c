#include <stdio.h>
#include <string.h>
int main()
{
    int a = 1, b = 1, i, m, n;
    scanf("%d", &m);
    printf("%d\n%d\n", a, b);
    for (i = 1; i <= m; i++)
    {
        n = a + b;
        printf("%d\n", n);
        a = b;
        b = n;
    }
    return 0;
}