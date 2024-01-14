//Programme to Create sorted Link List
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start;

create(int num)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = NULL;
	if(start == NULL || num < start->data)
	{
		temp->next = start;
		start = temp;
	}
	else
	{
		t = start;
		while(t->next != NULL && t->next->data < num)
		{
			t = t->next;
		}
		temp->next = t->next;
		t->next = temp;
	}
}

display()
{
	struct node *t;
	if(start == NULL)
	{
		printf("Link List is Empty\n");
	}
	else
	{
		t = start;
		while(t->next != NULL)
		{
			printf("%d\t",t->data);
			t = t->next;
		}
		printf("%d\t",t->data);
	}
}
main()
{
	int element, c, number;
	printf("Enter Number of Elements you want\n");
	scanf("%d",&element);
	for(c = 0; c < element; c++)
	{
		printf("Enter Number\n");
		scanf("%d",&number);
		create(number);
	}
	printf("\Sort Elements in Link List\n");
	display();
	
}
