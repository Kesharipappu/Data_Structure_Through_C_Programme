//WAP to Insert elements in Array

#include<stdio.h>
main()
{
	int a[5],b;
	printf("Enter number for Array\n ");
	for(b = 0; b < 5; b++)
	{
		scanf("%d",&a[b]);
	}
	
	printf("Number in Array\n");

	for(b = 0; b < 5; b++)
	{
		printf("%d\n",a[b]);
	}
}
