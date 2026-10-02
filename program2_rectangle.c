/*
QUESTION 2: Calculate Area and Perimeter of Rectangle
Write functions to calculate area and perimeter of a rectangle.
*/

#include<stdio.h>

int area(int length, int width) {
    return length * width;
}

int perimeter(int length, int width) {
    return 2 * (length + width);
}

int main() {
    int length, width, a, p;
    
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    
    printf("Enter width of rectangle: ");
    scanf("%d", &width);
    
    a = area(length, width);
    p = perimeter(length, width);
    
    printf("Area of rectangle: %d\n", a);
    printf("Perimeter of rectangle: %d\n", p);
    
    return 0;
}
