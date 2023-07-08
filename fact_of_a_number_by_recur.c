#include <stdio.h>
int main()
{
   int factorial(int);
   int num, f;
   printf("Enter the number: ");
   scanf("%d", &num);
   f = factorial(num);
   printf("Factorial of the number is %d", f);
   return 0;
}
int factorial(int n)
{
   int f;
   if (n == 1)
      return 1;
   else
      f = n * factorial(n - 1);
   return f;
}