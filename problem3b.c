/* for n number of rows or lines
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    if (scanf("%d", &n) < 1)
    {
        printf("Enter a valid input.");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        int a = 1;
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", a);
            a = a * (i - j)/(j + 1); // used the nCr formula
        }
        printf("\n");
    }
    return 0;
}*/
/*
#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        int a = 1;
        for (int j = 0; j < 5- i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", a);
            a = a * (i - j)/(j + 1); // used the nCr formula
        }
        printf("\n");
    }
    return 0;
}*/
/*
prints the reverse of the same, but for n number of lines or rows.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for (int i = n; i>=0; i--)
    {
        int a = 1;
        for (int j = 0; j < n-i-1; j++){
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", a);
            a = a * (i - j)/(j + 1); // used the nCr formula
        }
        printf("\n");
    }
    return 0;
}*/
// by using functions
#include <stdio.h>
int factorial(int a)
{
    int fact = 1;
    for (int i = 2; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n - i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            int icj = combination(i, j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}
