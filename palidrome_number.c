#include <stdio.h>

int main()
{

    int num, reverse = 0, rem, temp;

    printf("enter a number \n");
    scanf("%d", &num);

    temp = num;

    while (num)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    printf("the reversed number is %d \n", reverse);

    if (temp == reverse)
    {
        printf("this is palidrome\n");
    }

    else
    {
        printf("this is not palidrome");
    }

    return 0;
}
