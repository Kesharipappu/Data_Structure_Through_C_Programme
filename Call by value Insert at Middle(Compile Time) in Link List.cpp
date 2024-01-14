//Call by value Insert at Middle(Compile Time) in Link List
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

struct node* insert_at_middle(int n, int pos, struct node *s)
{
	int  c = 1;
	struct node *temp, *t;	
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = n;
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
	start = NULL;
	start = create(15, start);
	create(10, start);
	create(8, start);
	create(20, start);
	printf("Initially Link List \n");
	display(start);
	start = insert_at_middle(11,3,start);
	printf("\nAfter Insert at Middle in Link List\n");
	display(start);
	
}

