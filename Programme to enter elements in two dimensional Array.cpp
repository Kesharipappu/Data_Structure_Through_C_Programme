//WAP to enter elements in two dimensional Array
#include<stdio.h>
main()
{
	int a[3][2],c,d;
	printf("Enter elements in two dimensional Array A\n");
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 2 ;d++)
		{
			scanf("%d",&a[c][d]);
		}
	}
	
	printf("Elements in Array\n");
	
	for(c = 0; c < 3; c++)
	{
		for(d = 0; d < 2; d++)
		{
			printf("%d\t",a[c][d]);
		}
		printf("\n");
	}
}
