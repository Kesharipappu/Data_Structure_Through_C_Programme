//Call by Reference Delete at Beginning in Link List
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void create(struct node **s, int num)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = NULL;
	if(*s == NULL)
	{
		*s = temp;
	}
	else
	{
		t = *s;
		while(t->next != NULL)
		{
			t = t->next;
		}
		t->next = temp;
	}
}

void delete_at_beginning(struct node **s)
{
	struct node *temp;
	if(*s == NULL)
	{
		printf("Link List is Empty\n");
	}
	else
	{
		temp = *s;
		*s = (*s)->next;
		free(temp);
	}
}

void display(struct node **s)
{
	struct node *t;
	if(*s == NULL)
	{
		printf("Link List is Empty\n");
	}
	else
	{
		t = *s;
		while(t->next != NULL)
		{
			printf("%d\t",t->data);
			t = t->next;
		}
		printf("%d",t->data);
	}
}

main()
{
	
	struct node *start = NULL;
	int element, number,c;
	printf("Enter the Number of Elements you want\n");
	scanf("%d",&element);
	for(c = 0; c < element; c++)
	{
		printf("Enter Number\n");
		scanf("%d",&number);
		create(&start, number);
	}
	printf("Elements in Link List\n");
	display(&start);
	delete_at_beginning(&start);
	printf("\nAfter Delete at Beginning in Link List\n");
	display(&start);
	
}

