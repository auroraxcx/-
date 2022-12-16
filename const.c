#include <stdio.h>//用指针比大小并交换
int main()
{
    int a, b;
    int *p = &a, *q = &b;
    void swap(int *x, int *y);
    scanf("%d,%d", p, q);
    if (a < b)
    {
        swap(p, q);
    }
    printf("max=%d,min=%d\n", a, b);
    return 0;
}
void swap(int *x, int *y)
{
    int c;
    c = *x;
    *x = *y;
    *y = c;
}
