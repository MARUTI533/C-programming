#include <stdio.h>
int main()
{
    int arr[3] = {10, 22, 33};
    printf("reverse array:");
    for (int i = 3; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}