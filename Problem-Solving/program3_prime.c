/*
QUESTION 3: Check if Number is Prime
Write a function to check whether a number is prime or not.
*/

#include<stdio.h>

int isPrime(int n) {
    int i;
    if (n <= 1)
        return 0;
    
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isPrime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is not a Prime number\n", num);
    
    return 0;
}
