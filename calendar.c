#include <stdio.h>
int main()
{
    int n, i, days = 0, d; 
    printf("Enter year: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (i % 400 == 0)
            days = days + 366;
        else if (i % 100 == 0)
            days = days + 365;
        else if (i % 4 == 0)
            days = days + 366;
        else
            days = days + 365;
    }
    d = days % 7;
    printf("On 1st of January %d it was ", n);
    if (d == 0)
        printf("Monday");
    else if (d == 1)
        printf("Tuesday");
    else if (d == 2)
        printf("Wednesday");
    else if (d == 3)
        printf("Thursday");
    else if (d == 4)
        printf("Friday");
    else if (d == 5)
        printf("Saturday");
    else
        printf("Sunday");
    return 0;
}

