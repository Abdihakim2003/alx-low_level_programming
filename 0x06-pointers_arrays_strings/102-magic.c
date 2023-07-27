#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  
  // Add your code below this line
  *(int *)((char *)&a + (p - &n) * sizeof(a[0])) = 98;

  printf("a[2] = %d\n", a[2]);
  return (0);
}
