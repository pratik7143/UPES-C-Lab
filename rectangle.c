#include <stdio.h>
int main() {
    float length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    printf("Area of the Rectangle is %.2f\n", length*breadth);
    printf("Perimeter of Rectangle is %.2f\n", 2*(length+breadth));
    return 0;
}

