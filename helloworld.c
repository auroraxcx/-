#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 6; j++)
        {
            printf("\t");
            if (j ==3)
                continue;
            printf("%d", i * j);
        }
        printf("\n");
    }
    return 0;
}