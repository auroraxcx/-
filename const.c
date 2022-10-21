#include <stdio.h>
#include <math.h>
int main()
{
    char c;
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        printf("是字母");
    else
        printf("不是");
    return 0;
}