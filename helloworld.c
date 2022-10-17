#include <stdio.h>
int main()
{
    int i, n, k;
    printf("请输入一个整数哦\n");
    scanf("%d", &i);
    n = i;
    if (i < 0)
        printf("嘛呢哥们儿");
    else if (i == 1 || i == 0)
        printf("1");
    else
    {
        do
        {
            n = n * (i - 1);
            i--;
        } while (i > 1);
        printf("%d", n);
    }
    return 0;
}
