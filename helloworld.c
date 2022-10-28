#include <stdio.h>
int main()
{
    int i = 0, j = 0;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 6; j++)
        {
            printf("%d", i*j);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}