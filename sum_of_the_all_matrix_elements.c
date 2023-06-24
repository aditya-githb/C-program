#include<stdio.h>
int main()
{
 	int i,j,r,c,a[10][10],b[10][10],sum=0;

 	printf("\n Please Enter Number of rows:  ");
 	scanf("%d",&i);

 	printf("\n Please Enter Number of columns:  ");
 	scanf("%d",&j);

 	printf("\n Please Enter the array Elements\n");
 	for(r=0;r<i;r++)
  	{
   		for(c=0;c<j;c++)
    	{
      		scanf("%d",&b[r][c]);
      		sum=sum+b[r][c];
    	}
  	}

 	printf("\nThe sum of all elements: ");

    printf("%d ",sum);

 	return 0;
}