#include<stdio.h>
int main()
{
 	int i,j,r,c,a[10][10],b[10][10];
 	int arr[10][10];

 	printf("\nPlease Enter Number of rows:  ");
 	scanf("%d", &i);

	printf("\nPlease Enter Number of columns:  ");
 	scanf("%d", &j);

 	printf("\nPlease Enter the First Matrix Elements\n");
 	for(r=0;r<i;r++)
  	{
   		for(c=0;c<j;c++)
    	{
      		scanf("%d",&a[r][c]);
    	}
  	}

 	printf("\nPlease Enter the Second Matrix Elements\n");
 	for(r=0;r<i;r++)
  	{
   		for(c=0;c<j;c++)
    	{
      		scanf("%d",&b[r][c]);
    	}
  	}

 	for(r=0;r<i;r++)
  	{
   		for(c=0;c<j;c++)
    	{
      		arr[r][c] = a[r][c]+b[r][c];    
   	 	}
  	}

 	printf("\nThe Sum of First Matrix and Second Matrix is \n");
 	for(r=0;r<i;r++)
  	{
   		for(c=0;c<j;c++)
    	{
      		printf("%d ", arr[r][c]);
    	}
    	printf("\n");
  	}

 	return 0;
}
