#include <stdio.h>
int main()
{
	int i, j, r, c, a[10][10], b[10][10];

	printf("\n Please Enter Number of rows and columns :  ");
	scanf("%d %d", &i, &j);

	printf("\n Please Enter the array Elements\n");

	for (r = 0; r < i; r++)
	{
		for (c = 0; c < j; c++)
		{
			scanf("%d", &b[r][c]);
		}
	}

	for (r = 0; r < i; r++)
	{
		for (c = 0; c < j; c++)
		{
			a[r][c] = b[c][r];
		}
	}

	printf("\nThe transpose of Two a and b : \n");

	for (r = 0; r < i; r++)
	{
		for (c = 0; c < j; c++)
		{
			printf("%d ", a[r][c]);
		}
		printf("\n");
	}
	
	return 0;
}
