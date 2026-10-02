/*
QUESTION 4: Calculate Sum of Array Elements
Write a function to calculate the sum of all elements in an array.
*/

#include <stdio.h>

int sumArray(int arr[], int n)
{
    int sum = 0, i;
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[5], i, sum, n = 5;

    printf("Enter 5 array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sum = sumArray(arr, n);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
