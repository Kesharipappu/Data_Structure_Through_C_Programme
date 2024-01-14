//WAF to insert a number in existing Array
#include<stdio.h>
main()
{
	int a[10],no_e,c,num,pos;
	printf("Enter number of elements you want ");
	scanf("%d",&no_e);
	
	for(c = 0; c < no_e; c++)
	{
		scanf("%d",&a[c]);
	}
	
	printf("Elements in Array\n");
	for(c = 0; c < no_e; c++)
	{
		printf("%d\n",a[c]);
	}
	printf("Enter a number to insert and its position\n");
	scanf("%d%d",&num,&pos);
	insert(a,no_e,num,pos);
	printf("After inserting new elements in Array\n");
	for(c= 0; c <= no_e; c++)
	{
		printf("%d\n",a[c]);
	}
}
void insert(int a1[], int  n_e, int num1, int p)
{
	int c;
	for(c = n_e; c >= p; --c)
	{
		a1[c] = a1[c-1];
	}
	a1[c] = num1;
}
