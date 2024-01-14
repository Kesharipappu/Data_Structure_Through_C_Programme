//WAP to check a given matrix is lower triangular or not
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a[3][3],c,d;
	printf("Enter the elements of matrix A\n");
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 3; d++)
		{
			scanf("%d",&a[c][d]);
		}
	}
	
	printf("Elements in Matrix A\n");
	
	for(c = 0; c < 3; c++)
	{
		for (d = 0; d < 3; d++)
		{
			printf("%d\t",a[c][d]);	
		}
		printf("\n");
	}
	
	for(c = 0; c < 3; c++ )
	{
		for(d = 0; d < 3; d++)
		{
			if(c < d && a[c][d] != 0)
			{
				printf("Above Matrix is not a Lower Triangular Matrix");
				exit(0);
			}
		}
	}
	printf("Above MAtrix is Lower Triangular Matrix");
	
}
