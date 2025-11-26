#include <stdio.h>
int main()
{
    int n, num, pc = 0, nc = 0, zc = 0; // pc,nc,zc denote positive,negative and zero counts respectively.
    // pc,nc,zc are initialized to zero so that they do not take any garbage value.
    printf("How many inputs you want to take?\n");
    if (scanf("%d", &n)!=1) // to ensure the user enters integer only.
    {
        printf("Please enter an integer.");
        return 0;
    }
    else if (n==0)
    {
        printf("Enter a valid input.");
        return 0;
    }
    for (int i = 1; i <= n; i++)
        {
            printf("Enter number %d: ",i);
            scanf("%d", &num);
            // incrementing if not done then every count would give 0
            if (num < 0)
            {
                nc++;
            }
            else if (num > 0)
            {
                pc++;
            }
            else
            {
                zc++;
            }
    }
    printf("Count of Zeroes is %d\n", zc);
    printf("Count of Negative numbers is %d\n", nc);
    printf("Count of Positive numbers is %d\n", pc);
    return 0;
}
