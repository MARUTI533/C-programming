#include <stdio.h>
int main()
{
    int arr[4];
    arr[1] = 10;
    arr[0] = 20;
    arr[2] = 30;
    arr[3] = 40;
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);

    return 0;
}