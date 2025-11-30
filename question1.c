#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr,*newptr;
    int n,p,user;
    printf("Enter the size of the array you want to create:\n");
    scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }
    printf("Enter the value of the array\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter the position you want to insert the number at(1 to %d): \n",n+1);
    scanf("%d",&p);
    if (p<1||p>n+1)
    {
        printf("Invalid position!\n");
        free(ptr);
        return 1;
    }
    printf("Enter the number you want to insert:\n");
    scanf("%d",&user);
    newptr = (int *)malloc((n+1) * sizeof(int));
    for (int i=0; i<p-1; i++)
    {
        newptr[i] = ptr[i];
    }
    newptr[p-1]=user;
    for (int i=p;i<=n;i++)
    {
        newptr[i]=ptr[i-1];
    }
    for (int i=0; i<n+1;i++)
    {
        printf("%d ",newptr[i]);
    }
    printf("\n");
    return 0;
}
/*use of calloc(), checking whether the values are initialiazed to zero
int main(){
    int *ptr;
    int n;
    printf("Enter the size of the array you want to create:\n");
    scanf("%d",&n);
    ptr = (int *)calloc(n*sizeof(int));
    //for(int i = 0;i<n;i++){
    //printf("Enter the %d value of the array\n",i);
    //scanf("%d",&ptr[i]);
    //}
    for(int i=0;i<n;i++){
    printf("The value at index %d of this array is %d\n",i,ptr[i]);
    }
    return 0;
}
*/
