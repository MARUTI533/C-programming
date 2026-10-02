// addition using pointer
#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *p = &a;
    int *p1 = &b;
    printf("%d\n", *p + *p1);
    return 0;
}