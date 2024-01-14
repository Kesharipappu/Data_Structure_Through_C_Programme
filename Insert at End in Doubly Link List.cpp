//Insert at End in Doubly Link List
#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
}*start, *end;

create_doubly(int n)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = n;
	temp->next = NULL;
	if(start == NULL)
	{
		start = end = temp;
	}
	else
	{
		t = start;
		while(t->next != NULL)
		{
			t = t->next;
		}
		t->next = temp;
		temp->prev = t;
		end = temp;
	}
}

insert_at_end(int las)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = las;
	temp->next = NULL;
	if(start == NULL)
	{
		start = end = temp;
	}
	else
	{
		t = start;
		while(t->next != NULL)
		{
			t = t->next;
		}
		t->next = temp;
		temp->prev = t;
		end = temp;
	}
}

display_start()
{
	struct node *t;
	if(start == NULL)
	{
		printf("Doubly Link List is Empty\n");
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

display_end()
{
	struct node *t;
	if(end == NULL)
	{
		printf("Doubly Link List is Empty\n");
	}
	else
	{
		t = end;
		while(t->prev != NULL)
		{
			printf("%d\t",t->data);
			t = t->prev;
		}
		printf("%d\t",t->data);
	}
}

main()
{
	int number, c, element, last;
	printf("Enter Number of Elements you want in Doubly Link List\n");
	scanf("%d",&element);
	for(c = 0; c < element; c++)
	{
		printf("Enter Number\n");
		scanf("%d",&number);
		create_doubly(number);
	}
	printf("Before Insert at End in Doubly Link List\n");
	printf("Display from Start\n");
	display_start();
	printf("\nDispaly from End\n");
	display_end();
	
	printf("\nEnter Number to Insert at End\n");
	scanf("%d",&last);
	insert_at_end(last);
	printf("\n\n\nAfter Insert at End in Doubly Link List\n");
	printf("Display from Start\n");
	display_start();
	printf("\nDispaly from End\n");
	display_end();
	
}

