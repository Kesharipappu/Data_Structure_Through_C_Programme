//WAP to multiplication of two Matrix
#include<stdio.h>
main()
{
	int a[3][3], b[3][3], r[3][3] = {0}, c, d, e;
	
	printf("Enter Elements in Matrix A\n");
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 3; d++)
		{
			scanf("%d",&a[c][d]);
		}
	}
	
	printf("Enter Elements in Matrix B\n");
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0 ; d < 3; d++)
		{
			scanf("%d",&b[c][d]);
		}
	}
	
	printf("Elements of Matrix A\n");
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 3; d++)
		{
			printf("%d\t",a[c][d]);
		}
		printf("\n");
	}
	
	printf("Elements of Matrix B\n");
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 3; d++)
		{
			printf("%d\t",b[c][d]);
		}
		printf("\n");
	}
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 3; d++)
		{
			for(e = 0; e < 3; e++)
			{
				r[c][d] = r[c][d] + a[c][e] * b[e][d];
			}
		}
	}
	
	printf("After Multiplication of Two Matrix Elements are\n");
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 3; d++)
		{
			printf("%d\t",r[c][d]);
		}
		printf("\n");
	}
	
}
