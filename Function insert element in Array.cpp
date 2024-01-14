//WAF to insert element in Array
#include<stdio.h>
main()
{
	int a[5],c;
	void display(int [], int); //prototype
	printf("Enter element\n");
	for(c = 0; c < 5; c++)
	{
		scanf("%d",&a[c]);
	}
	display(a,5);
}

void display(int a1 [], int size)
{
	int c;
	printf("Elements in Array\n");
	for(c = 0; c < size; c++)
	{
		printf("%d\n",a1[c]);
	}
}

