//WAP to insert a number in existing Array
#include<stdio.h>
int main()
{
	int a[10],no_e,num,pos,c;
	printf("Enter how many elements you want in Array \n");
	scanf("%d",&no_e);
	printf("Enter elements in Array\n");
	
	for(c = 0; c < no_e; c++)
	{
		scanf("%d",&a[c]);
	}
	
	printf("Elements in Array \n");
	
	for(c = 0; c < no_e; c++)
	{
		printf("%d\n",a[c]);
	}
	
	printf("Enter a number to insert in Array and their position\n");
	scanf("%d%d",&num,&pos);
	
	for(c = no_e; c >= pos; c--)
	{
		a[c] = a[c-1];
	}
	a[c] = num;
	
	printf("Array with new elements \n");
	for(c = 0; c <= no_e; c++)
	{
		printf("%d\n",a[c]);
	}
	
}
