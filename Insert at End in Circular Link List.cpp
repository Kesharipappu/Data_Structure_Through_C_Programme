//Insert at End in Circular Link List
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*start;

void create_circular(int num)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = NULL;
	if(start == NULL)
	{
		start = temp;
		temp->next = start;
	}
	else
	{
		t = start;
		while(t->next != start)
		{
			t = t->next;
		}
		temp->next = start;
		t->next = temp;
	}
}

void insert_at_end(en)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = en;
	temp->next = NULL;
	if(start == NULL)
	{
		start = temp;
		temp->next = start;
	}
	else
	{
		t = start;
		while(t->next != start)
		{
			t = t->next;
		}
		temp->next = start;
		t->next = temp;
	}
}

display()
{
	struct node *t;
	if(start == NULL)
	{
		printf("Circular Link List is Empty\n");
	}
	else
	{
		t = start;
		while(t->next != start)
		{
			printf("%d\t",t->data);
			t = t->next;
		}
		printf("%d\t",t->data);
	}
}


main()
{
	int c, number, element, end;
	printf("Enter Number of Elements you want  in Circular Link List\n");
	scanf("%d",&element);
	for(c = 0; c < element; c++)
	{
		printf("\nEnter Number\n");
		scanf("%d",&number);
		create_circular(number);
	}
	
	printf("\nElements in Circular Link List\n");
	display();
	
	printf("\nEnter Number to Insert at End in Circular Link List\n");
	scanf("%d",&end);
	insert_at_end(end);
	printf("\nAfter Insert at End in Circular Link List. Elements are\n");
	display();
}
