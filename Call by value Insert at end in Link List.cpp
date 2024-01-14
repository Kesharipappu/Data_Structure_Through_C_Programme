//Call by value Insert at end in Link List
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

//struct node* create(int, struct node*);


struct node* create(int n, struct node *s)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = n;
	temp->next = NULL;
	if(s == NULL)
	{
		s = temp;
		return(s);
	}
	else
	{
		while(s->next != NULL)
		{
			s = s->next;
		}
		s->next = temp;
	}
}

void insert_end(int las, struct node *s)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = las;
	temp->next  = NULL;
	if(s == NULL)
	s = temp;
	else
	{
		while(s->next != NULL)
		{
			s = s->next;
		}
		s->next = temp;
	}
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
	int element, number,c, last;
	start = NULL;
	printf("Enter the Number of Elements you Want\n");
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
	printf("\nEnter Number to Insert at End\n");
	scanf("%d",&last);
	insert_end(last, start);
	printf("\nAfter Insert at End ");
	display(start);
}
