//WAF to delete a number from Array
#include<stdio.h>
main()
{
	int a[7], c, no_e, pos;
	printf("Enter number of elements you want\n");
	scanf("%d",&no_e);
	for(c = 0; c < no_e; c++)
	{
		scanf("%d",&a[c]);
	}
	printf("Elements in Array before deletion\n");
	for(c = 0; c < no_e; c++)
	{
		printf("%d\n",a[c]);
	}
	printf("Enter number of position to delete from Array\n");
	scanf("%d",&pos);
	delete(a,no_e,pos);
	printf("After deletion elements in Array\n");
	for(c = 0; c < no_e - 1; c++)
	{
		printf("%d\n",a[c]);
	}
}

void delete(int a1[], int n_e, int p)
{
	int c;
	for(c = p; c < n_e; c++)
	{
		a1[c-1] = a1[c];
	}
	a1[c-1] = 0;
}
