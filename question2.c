#include <stdio.h>
#include <stdlib.h>
void inputArray(int *arr, int n);
void countFrequency(int *arr, int n);
void inputArray(int *arr, int n)
{
    for (int i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void countFrequency(int *arr, int n)
{
    int *visited = (int *)calloc(n,sizeof(int));
    for (int i=0; i<n;i++)
    {
        if (visited[i]==1)
            continue;
        int count = 1;
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
                visited[j]=1;
            }
        }
        printf("Element %d appears %d times\n", arr[i], count);
    }
    free(visited);
}
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements: ");
    inputArray(arr,n);
    countFrequency(arr,n);
    free(arr);
    return 0;
}
