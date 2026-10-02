#include <stdio.h>

int addition(int no1, int no2)
{

    int result = 0;
    result = no1 + no2; // business logic
    return result;
}

int main()
{
    int value1 = 0;
    int value2 = 0;
    int ans = 0;
    printf("Enter first number:\n");
    scanf("%d", &value1);
    printf("enter second number:\n");
    scanf("%d", &value2);
    addition(value1, value2); // FUNCTION CALL
    ans = addition(value1, value2);
    printf(" addition is:%d\n", ans);

    return 0;
}