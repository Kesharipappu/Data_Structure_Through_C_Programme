//Call by value Insert at Beginning in Link List
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node* create(int n, struct node *s)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = n;
	temp->next = NULL;
	if(s == NULL)
	{
		s = temp;
	}
	else
	{
		while(s->next != NULL)
		{
			s = s->next;
		}
		s->next = temp;
	}
	return s;

}

struct node* insert_at_beginning(int beg, struct node *s)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = beg;
	temp->next  = NULL;
	if(s == NULL)
	s = temp;
	else
	{
		temp->next = s;
		s = temp;
	}
	return s;
}

void display(struct node *s)
{
	if(s == NULL)
	printf("Link List is Empty\n");
		else
		{
			printf("Elements in Link List\n");
			while(s->next != NULL)
			{
				printf("%d\t",s->data);
				s = s->next;
			}
			printf("%d\t",s->data);
		}
}

main()
{
	struct node *start;
	int element, number, c, beginning;
	start = NULL;
	printf("Enter the Number of Elements you want\n");
	scanf("%d",&element);
	for(c = 0; c < element; c++)
	{
		printf("Enter Number\n");
		scanf("%d",&number);
		if(c == 0)
		{
			start = create(number, start);
		}
		else
		{
			create(number, start);
		}
	}
	printf("Initially ");
	display(start);
	printf("\nEnter Number to Insert at Beginning\n");
	scanf("%d",&beginning);
	start = insert_at_beginning(beginning, start);
	printf("\nAfter Insert at Beginning ");
	display(start);
	
}

