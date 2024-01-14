//Call by Reference Insert at beginning in Link List
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

create(struct node **s, int num)
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

void insert_at_beginning(struct node **s, int beg)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = beg;
	temp->next = NULL;
	if(*s == NULL)
	{
		*s = temp;
	}
	else
	{
		temp->next = *s;
		*s = temp;
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
	int number, element, c, beginning;
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
	printf("\nEnter Number to Insert at Beginning\n");
	scanf("%d",&beginning);
	insert_at_beginning(&start, beginning);
	printf("\nAfter Insert at Beginning in Link List\n");
	display(&start);
	
}
