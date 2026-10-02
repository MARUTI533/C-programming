#include <stdio.h>
int main()
{

    int arr[4] = {10, 20, 30, 40};
    printf("%d\n", arr);
    printf("%d\n", &arr);
    printf("%d\n", arr[0]);
    printf("%d\n", &arr[2]);
    printf("%d\n", &arr[1]);
    printf("%d\n", &arr[3]);

    return 0;
}