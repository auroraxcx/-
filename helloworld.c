#include <stdio.h> //6.写一个函数,将两个字符串连接。
void link(char a[], char b[], char c[])
{
	int i, j = 0, k;
	for (i = 0; a[i] != '\0'; i++)
	{
		c[j] = a[i];
		j++;
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		c[j] = b[k];
		j++;
	}
	printf("连接后字符串为：%s", c);
}
int main()
{
	char str1[50], str2[50], str3[100];
	printf("请输入第一个字符串：");
	gets(str1);
	printf("第一个字符串为：%s", str1);
	printf("\n请输入第二个字符串:");
	gets(str2);
	printf("第二个字符串为：%s", str2);
	getchar();
	link(str1,str2,str3);
	return 0;
}