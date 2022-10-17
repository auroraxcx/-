#include <stdio.h>
int main()
{
  int arr[] = {1, 2, 3, 6, 5, 6};
  int k = 17;
  int i = 0;
  int sz = sizeof(arr) / sizeof(arr[0]);
  for (i = 0; i < sz; i++)
  {
    if (k == arr[i])
    {
      printf("下标为%d \n", i);
      continue;
    }
  }
  if (i == sz)
    printf("没有了\n");
  return 0;
}