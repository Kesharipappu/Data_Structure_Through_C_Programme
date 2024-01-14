//WAP to delete a number from Array
#include<stdio.h>
main()
{
	int a[7], c, no_e, pos;
	printf("Enter number of elements you want \n");
	scanf("%d",&no_e);
	for(c= 0; c < no_e; c++)
	{
		scanf("%d",&a[c]);
	}
	printf("Elements in Array before deletion \n");
	for(c= 0; c < no_e; c++)
	{
		printf("%d\n",a[c]);
	}
	printf("Enter number of position to delete from Array \n");
	scanf("%d",&pos);
	for(c = pos; c < no_e; c++)
	{
		a[c-1] = a[c];
	}
	a[c-1] = 0;
	printf("After deletion elements in Array \n");
	for(c = 0; c < no_e - 1; c++)
	{
		printf("%d\n",a[c]);
	}
}
