//Call by value Delete at Middle in Link List
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node* create(int num, struct node *s)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
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

struct node* delete_at_middle(struct node *s)
{
	 int c = 1, position;
	 struct node *temp, *t;
	 printf("\nEnter position to delete in Link List\n");
	 scanf("%d",&position);
	 if(s == NULL)
	 printf("Link List is Empty\n");
	 else
	 {
	 	if(position == 1)
	 	{
	 		temp = s;
			 s = s->next;
			 free(temp);	
		}
		else
		{
			t = s;
			while(c < position - 1)
			{
				t = t->next;
				c++;
			}
			temp = t->next;
			t->next = t->next->next;
			free(temp);
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
	int element, number, c;
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
	start = delete_at_middle(start);
	printf("\nAfter Delete at Middle ");
	display(start);
	
}

