//Programme to transpose a matrix
#include<stdio.h>
main()
{
	int a[3][3],c,d,t;
	printf("Enter elements in matrix A\n");
	
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
		for(d = 0; d < 3 ; d++)
		{
			printf("%d\t",a[c][d]);
		}
		printf("\n");
	}
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 3; d++)
		{
			if(c < d)
			{
				t = a[c][d];
				a[c][d] = a[d][c];
				a[d][c] = t;
			}
		}
	}
	
	printf("After Transposing Matrix A\n");
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 3; d++)
		{
			printf("%d\t",a[c][d]);
		}
		printf("\n");
	}
		

}
