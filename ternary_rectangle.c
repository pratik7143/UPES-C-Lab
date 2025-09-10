#include<stdio.h>
int main() {
    float length1, breadth1, length2, breadth2, length3, breadth3;
    float p1, p2, p3, maxp;
    printf("Enter length and breadth of rectangle 1: ");
    scanf("%f %f", &length1, &breadth1);
    printf("Enter length and breadth of rectangle 2: ");
    scanf("%f %f", &length2, &breadth2);
    printf("Enter length and breadth of rectangle 3: ");
    scanf("%f %f", &length3, &breadth3);
    p1 = 2*(length1 + breadth1);
    p2 = 2*(length2 + breadth2);
    p3 = 2*(length3 + breadth3);
    maxp = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3);
    printf("Perimeters are Rectangle 1 = %f, Rectangle 2 = %f, Rectangle 3 = %f\n", p1, p2, p3);
    printf("The rectangle with the highest perimeter has perimeter = %f\n", maxp);
    return 0;
}
