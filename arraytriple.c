#include <stdio.h>
int main()
{
    int arr[50], n;
    printf("Enter the number of elements you want to take:\n");
    scanf("%d", &n);
    if (n < 3)
    {
        printf("Please enter at least 3 elements to find the sum of 3 consecutive numbers.\n");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxSum = arr[0] + arr[1] + arr[2];
    int startIndex = 0;
    for (int i = 1; i <= n - 3; i++)
    {
        int currentSum = arr[i] + arr[i + 1] + arr[i + 2];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            startIndex = i;
        }
    }
    printf("The 3 consecutive numbers with the highest sum are: %d, %d, %d\n",arr[startIndex], arr[startIndex + 1], arr[startIndex + 2]);
    printf("Their sum is: %d\n",maxSum);
    return 0;
}
