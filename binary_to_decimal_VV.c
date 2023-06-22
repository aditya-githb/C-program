#include <stdio.h>
#include <math.h>
int convert1(int);
int convert2(int);
int main() 
{
  int n;
  int m;
  printf("Enter a binary number: \n");
  scanf("%d",&n);

  printf("Enter a decimal number: \n");
  scanf("%d",&m);

  printf("%d in binary = %d in decimal",n,convert1(n));

  printf("\n%d in decimal = %d in binary ",m, convert2(m));
  
  return 0;
}
int convert1(int n) 
{
  int dec=0,i=0,rem;
  while (n!=0) 
  {
    rem = n%10;
    n/=10;
    dec+=rem*pow(2,i);
    ++i;
  }
  return dec;
}
int convert2(int n) 
{
  long long bin=0;
  int rem,i=1;
  while (n!=0){
    rem=n%2;
    n/=2;
    bin+=rem*i;
    i*=10;
  }
  return bin;
}
