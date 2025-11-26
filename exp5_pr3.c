#include <stdio.h>
int main()
{
    int arr[50], n, fnum, freq = 0;
    printf("Enter the number of elements you want to take:\n");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find Frequency of:\n");
    scanf("%d", &fnum);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == fnum){
            freq++;
        }
        }
        printf("The frequency of %d is %d\n", fnum, freq);
        return 0;
}
/*to find duplicate element
#include <stdio.h>
int main()
{
    int arr[50], n;
    printf("Enter the number of elements you want to take:\n");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (arr[j] == arr[k])
            {
                printf("%d is a duplicate element\n", arr[j]);
                break;
            }
        }
    }

    return 0;
}*/
