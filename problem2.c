#include <stdio.h>
int main()
{
    int num,mp; //mp denotes how many multiples of the number the user wants to know.
    printf("Enter a number: ");
     if (scanf("%d",&num) < 1){
        printf("The input is invalid.");
        return 0;
    }
    else if(num==0){
        printf("The multiplication of 0 with any number will be 0");
        return 0;
    }
    printf("Enter how many multiples are required?\n");
    scanf("%d",&mp);
    for (int i = 1; i <= mp; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}
