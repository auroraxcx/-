#include <stdio.h>
int main()
{
	int i, j, row, colum, max;
	int a[3][4];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
		}
	max = a[0][0];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] == max)
			{
				printf("max=%d,row=%d,colum=%d\n", max, i + 1, j + 1);
			}
		}
	}
	return 0;
}