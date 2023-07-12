#include <stdio.h>
int recSum(int);
int main() 
{
    int num;
    printf("Enter a positive number to get the sum: ");
    scanf("%d",&num);
    printf("\nThe Sum is: %d", recSum(num));
    return 0;
}
int recSum(int n) 
{
    if(n)
        return n + recSum(n - 1);
    else
        return n;
}