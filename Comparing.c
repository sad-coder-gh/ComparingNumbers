#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("THIS CODE IS TO COMPARE THREE DIFFERENT NUMBERS! \n");
    for (int i = 0; i < 2; i++)
    {
        int num1, num2, num3;

        printf("Enter Your First Number: ");
        scanf("%d", &num1);

        printf("Enter Your Second Number: ");
        scanf("%d", &num2);

        if (num1 == num2)
        {
            printf("You Can't Have Equal Numbers! \n");
            continue;
        }

        printf("Enter Your Third Number: ");
        scanf("%d", &num3);

        if (num1 == num2 || num1 == num3 || num2 == num3)
        {
            printf("You Can't Have Equal Numbers! \n");
            continue;
        }

        if (num1 > num2 && num1 > num3)
        {
            printf("The First Number %d Is Greatest! \n", num1);
        }
        else if (num2 > num1 && num2 > num3)
        {
            printf("The Second Number %d Is Greatest! \n", num2);
        }
        else if (num3 > num1 && num3 > num2)
        {
            printf("The Third Number %d Is Greatest! \n", num3);
        }
        else
        {
            printf("You Can't Have Equal Numbers! \n");
        }
    }

    return 0;
}

