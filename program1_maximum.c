/*
QUESTION 1: Find Maximum of Two Numbers
Write a function to find the maximum of two numbers.
*/

#include<stdio.h>

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2, max;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    max = maximum(num1, num2);
    
    printf("Maximum number is: %d\n", max);
    
    return 0;
}
