#include <stdio.h>
int main()
{
    int years = 10;
    int gr = 10;     // growth rate in percent
    int pp = 100000; // present population
    printf("For the last decade :\n");
    for (int i = 0; i <= years; i++)
    {
        printf("Year %d: %d\n", i, pp);
        pp = (pp * 100)/(100 + gr);
    }
        return 0;
}
    /* if asked for the next decade
    printf("For next decade:\n", years);
    population = pp;
    for (int i = 0; i <= years; i++)
    {
        printf("Year +%d: %d\n", i, population);
        population = (population * (100.0 + gr)) / 100.0;
    }
    return 0;
}
    */
