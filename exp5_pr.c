/*LARGEST NUMBER IN THE ARRAY
#include<stdio.h>
int main()
{
    int arr[50],n;
    printf("Enter the number of elements you want to take:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large = arr[0];
    for (int i=1;i<n;i++)
    { 
        if (arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("The largest number is %d\n",large);
    return 0;
}
*/ 
// SECOND LARGEST NUMBER IN THE ARRAY
#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[50],n;
    printf("Enter the number of elements you want to take:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large=INT_MIN;
    int slarge=INT_MIN;
    for (int i=1;i<n;i++)
    { 
        if (arr[i]>large)
        {
            large=arr[i];
        }
    }
     for (int i=1;i<n;i++)
    { 
        if (arr[i]!=large && slarge<arr[i] && large>slarge)
        {
            slarge=arr[i];
        }
    }
    printf("The second largest number is %d\n",slarge);
    return 0;
}

