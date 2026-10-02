#include <stdio.h>
int main()
{
  int std = 0;
  printf("enter std");
  scanf("%d", &std);
  if (std == 1)
  {
    printf("9.30");
  }
  else if (std == 2)
  {
    printf("10.30");
  }
  else if (std == 3)
  {
    printf("11.30");
  }
  else
  {
    printf("invalid");
  }
  return 0;
}