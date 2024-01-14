//WAP to enter a matrix as upper triangular matrix
#include<stdio.h>
main()
{
	int a[3][3]={0},c,d;
	printf("Enter Elements in Matrix A\n");
	for(c = 0; c < 3; c++)
	{
		for(d =0; d < 3; d++)
		{
			if(c <= d)
			{
				scanf("%d",&a[c][d]);
			}
		}
	}
	printf("Matrix A-->\n");
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 3; d++)
		{
			printf("%d\t",a[c][d]);
		}
		printf("\n");
	}
	printf("Upper Triangular Matrix");
}

