#include <stdio.h>
int main()
{
  int num, i;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &num);
  for (i = 0; i < num; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%lf", &arr[i]);
  }
  for (i = 1; i < num; ++i)
  {
    if (arr[0] < arr[i])
    {
      arr[0] = arr[i];
    }
  }
  printf("Largest element = %.2lf", arr[0]);
  return 0;
}