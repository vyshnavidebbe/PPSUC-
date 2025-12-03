#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // First, check if it can form a triangle
    if(a + b > c && a + c > b && b + c > a) {

        // Equilateral: all sides equal
        if(a == b && b == c) {
            printf("Equilateral triangle");
        } 
        // Isosceles: any two sides equal
        else if(a == b || a == c || b == c) {
            printf("Isosceles triangle");
        } 
        // Scalene: no sides equal
        else {
            printf("Scalene triangle");
        }

    } else {
        printf("Not a valid triangle");
    }

    return 0;
}

