//Call by value Insert at Middle (Run Time) in Link List
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

struct node* insert_at_middle(struct node *s)
{
	int num, pos, c = 1;
	struct node *temp, *t;
	printf("\nEnter the number to insert and its position\n");
	scanf("%d%d",&num,&pos);
	
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = NULL;
	if(s == NULL)
	s = temp;
	else
	{
		if(pos == 1)
		{
			temp->next = s;
			s = temp;
		}
		else
		{
			t = s;
			while(c < pos - 1)
			{
				t = t->next;
				c++;
			}
			temp->next = t->next;
			t->next = temp;
		}
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
	int number, element, c;
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
	start = insert_at_middle(start);
	printf("\nAfter Insert at Middle ");
	display(start);
	
}

