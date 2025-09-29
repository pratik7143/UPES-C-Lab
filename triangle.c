#include <stdio.h>
int main()
{
    float a, b, c; // a,b,c are the three sides of the triangle
    printf("Enter threee sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0)
        printf("Sides must be positive or greater than zero");
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("It is a valid triangle.\n");
        if (a == b && b == c)
        {
            printf("It is an equilateral Triangle.\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("It is an isosceles Triangle.\n");
        }
        else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
        {
            printf("It is a right angled Triangle.\n");
        }
        else if (a != b && b != c && a != c)
        {
            printf("It is a scalene Triangle.\n");
        }
        else
        {
            printf("Triangle is not valid.\n");
        }
        return 0;
    }
}

