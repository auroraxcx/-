#include <stdio.h>
#include <string.h>
int main()
{
    int a[10];
    int i, j, t;
    printf("请输入十个数字\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < 9; j++)
        for (i = 0; i < 9-j ; i++)
            if (a[i] > a[i + 1])
            {
                t = a[i + 1];
                a[i + 1] = a[i];
                a[i] = t;
            }
    printf("结果是\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
        printf("\n");
    }
    return 0;
}