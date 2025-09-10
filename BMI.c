#include <stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Enter the Weight of person in kilograms: ");
    scanf("%f", &weight);
    printf("Enter the height in m: ");
    scanf("%f", &height);
    if ((weight <= 0) || ((weight >= 145 && height <= 0) || height >= 2.72))
    {
        printf("This case is not possible");
        return 1;
    }
    bmi = weight / (height * height);
    printf("Your BMI is %f\n", bmi);
    if (bmi < 15)
    {
        printf("You are under the category of starvation\n");
    }
    else if (bmi >= 15.1 && bmi <= 17.5)
    {
        printf("You are under the category of Anorexic\n");
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("You are under the category of Underweight.\n");
    }
    else if (bmi >= 18.6 && bmi <= 24.9)
    {
        printf("You are under the category of Ideal BMI.\n");
    }
    else if (bmi >= 25 && bmi <= 25.9)
    {
        printf("You are under the category of Overweight.\n");
    }
    else if (bmi >= 30 && bmi <= 39.9)
    {
        printf("You are under the category of Obese.\n");
    }
    else if (bmi >= 40)
    {
        printf("You are under the category of Morbidity Obese.\n");
    }
    return 0;
}