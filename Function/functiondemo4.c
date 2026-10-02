#include <stdio.h>

int main()
{
    int value1 = 0;
    int value2 = 0;
    int ans = 0;
    printf("Enter first number:\n");
    scanf("%d", &value1);
    printf("enter second number:\n");
    scanf("%d", &value2);
    ans = value1 + value2; // bussiness logic
    printf("addition is:%d\n", ans);

    return 0;
}