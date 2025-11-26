#include <stdio.h>
int main()
{
    int limit = 20000;
    int a, b, c, d;
    printf("Ramanujan numbers up to %d:\n", limit);
    for (a = 1; a <= limit; a++)
    {
        for (b = a; b <= limit; b++)
        {
            for (c = a; c <= limit; c++)
            {
                for (d = c; d <= limit; d++)
                {
                    int sum1 = a * a * a + b * b * b;
                    int sum2 = c * c * c + d * d * d;
                    if (sum1 == sum2 && !(a == c && b == d))
                    {
                        if (sum1 <= limit)
                        {
                            printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                                   sum1, a, b, c, d);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
