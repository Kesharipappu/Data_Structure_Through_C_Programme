//Programme to add two matrix
#include<stdio.h>
main()
{
	int a[3][3], b[3][3],r[3][3],c,d;
	printf("Enter Elements in Array A\n");

	for(c = 0; c < 3; c++)	
	{
		for(d = 0; d < 3; d++)
		{
			scanf("%d",&a[c][d]);
		}
	}
	
	printf("Enter Elements in Array B\n");
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 3; d++)
		{
			scanf("%d",&b[c][d]);
		}
	}
	
	printf("Elements in Array A\n");
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 3; d++)
		{
			printf("%d\t",a[c][d]);
		}
		printf("\n");
	}
	
	printf("Elements in Array B\n");
	
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
			r[c][d] = a[c][d] + b[c][d];
		}
	}
	
	printf("Addition of both Array\n");
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d <3; d++)
		{
			printf("%d\t",r[c][d]);
		}
		printf("\n");
	}
	
}
