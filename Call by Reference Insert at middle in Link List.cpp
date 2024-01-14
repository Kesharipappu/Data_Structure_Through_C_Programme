//Call by Reference Insert at middle in Link List
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

void insert_at_middle(struct node **s)
{
	int num, pos, c = 1;
	struct node *temp, *t;
	printf("\nEnter the Number to insert and its Position\n");
	scanf("%d%d",&num,&pos);
	temp = (struct node*)malloc(sizeof(struct node*));
	temp->data = num;
	temp->next = NULL;
	if(*s == NULL)
	{
		*s == temp;
	}
	else
	{
		if(pos == 1)
		{
			temp->next = *s;
			*s = temp;
		}
		else
		{
			t = *s;
			while(c < pos - 1)
			{
				t = t->next;
				c++;
			}
			temp->next = t->next;
			t->next = temp;
		}
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
	int number, element, c, middle;
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
	insert_at_middle(&start);
	printf("\nAfter Insert at Middle in Link List\n");
	display(&start);
	
}

