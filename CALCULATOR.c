#include <stdio.h>

void main () {

float num1, num2;
char x;

printf("enter the operater \n");
scanf("%c", &x);

printf("enter two number : \n");
scanf("%f %f", &num1, &num2);


if (x == '+' )
{
    printf("%.2f", num1+num2);
}

else if (x == '-')
{
    printf("%.2f", num1-num2);
}

else if (x == '*')
{
    printf("%.2f", num1*num2);
}

else if (x == '/')
{
    printf("%.2f", num1/num2);
}

else
{
    printf("you entered a wrong operator");
}


}
