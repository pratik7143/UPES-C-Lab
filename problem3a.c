/* in general for n number of rows
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of Rows: ");
    scanf("%d",&n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++) {  // spaces
            printf("  ");
    }
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int a = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3 - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d   ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
/* this program prints the odd number triangle.
#include <stdio.h>
int main()
{
    int a = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3 - i; j++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d   ", a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}
*/