

#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *p = NULL;
    int *q = NULL;
    p = &(arr[1]);
    q = &(arr[3]);
    printf("%d\n", *p);
    printf("%d\n", *q);

    return 0;
}