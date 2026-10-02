#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 25, 55};
    int *p = &(arr[2]);
    int *q = &(arr[1]);
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", p - q);
    printf("%d\n", q - 2);
    printf("%d\n", p + 2);

    return 0;
}