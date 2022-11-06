#include <stdio.h>
int main()
{
    int a[3][3], i, j, m = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < 3; i++)
    {
        m = m + a[i][i];
    }
    printf("%d", m);
    return 0;
}