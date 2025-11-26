#include <stdio.h>
int main()
{
    int arr[50], n, pc = 0, nc = 0, zc = 0, even = 0, odd = 0;
    printf("Enter the number of elements you want to take:\n");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (arr[i] > 0)
        {
            pc++;
        }
        else if (arr[i] < 0)
        {
            nc++;
        }
        else
        {
            zc++;
        }
    }
    printf("Count of Positive numbers is %d\n", pc);
    printf("Count of Negative numbers is %d\n", nc);
    printf("Count of Zeroes is %d\n", zc);
    printf("Count of Even numbers is %d\n", even);
    printf("Count of Odd numbers is %d\n", odd);
    return 0;
}
/*By using ternary operators
#include <stdio.h>
int main()
{
    int arr[50], n, pc = 0, nc = 0, zc = 0, even = 0, odd = 0;
    printf("Enter the number of elements you want to take:\n");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        (arr[i] % 2 == 0) ? (even++) : (odd++);
        (arr[i] > 0) ? (pc++) : (arr[i] < 0 ? (nc++) : (zc++));
    }
    printf("Count of Positive numbers is %d\n", pc);
    printf("Count of Negative numbers is %d\n", nc);
    printf("Count of Zeroes is %d\n", zc);
    printf("Count of Even numbers is %d\n", even);
    printf("Count of Odd numbers is %d\n", odd);
    return 0;
}
*/
/* using switch case
#include <stdio.h>
int main()
{
    int arr[50], n;
    int pc = 0, nc = 0, zc = 0, even = 0, odd = 0;
    printf("Enter the number of elements you want to take:\n");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int ternary1=arr[i] % 2 == 0;
        int ternary2 = arr[i] > 0 ? 1 : (arr[i] < 0 ? -1 : 0);
        switch (ternary1)
        {
        case 1:
            even++;
            break;
        case 2:
            odd++;
            break;
        }
        switch (ternary2)
        {
        case 1:
            pc++;
            break;
        case 2:
            nc++;
            break;
        case 3:
            zc++;
            break;
        }
    }
    printf("Count of Positive numbers is %d\n", pc);
    printf("Count of Negative numbers is %d\n", nc);
    printf("Count of Zeroes is %d\n", zc);
    printf("Count of Even numbers is %d\n", even);
    printf("Count of Odd numbers is %d\n", odd);

    return 0;
}
*/