//Insert at Middle in Doubly Link List
#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *prev;
	int data;
	struct node *next;
}*start, *end;

void create_doubly(int num)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = num;
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

insert_at_middle(int mid, int pos)
{
	
	struct node *temp, *t;
	int c = 1;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->prev = NULL;
	temp->data = mid;
	temp->next = NULL;
	if(start == NULL)
	{
		start = end = temp;
	}
	else
	{
		if(pos == 1)
		{
			start->prev = temp;
			temp->next  = start;
			start = temp;
		}
		else
		{
			t = start;
			while(c < pos - 1)
			{
				t = t->next;
				c++;
			}
			temp->next = t->next;
			temp->prev = t;
			t->next = temp;
			
			if(temp->next != NULL)
			{
				t->next->next->prev = temp;
			}
			else
			{
				end = temp;
			}
		}
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
    int number, c, element, midd, position;
	printf("Enter Number of Elements you want in Doubly Link List\n");
	scanf("%d",&element);
	for(c = 0; c < element; c++)
	{
		printf("Enter Number\n"); 
		scanf("%d",&number);
		create_doubly(number);
	}
	printf("Before Insert at Middle in Doubly Link List\n");
	printf("Display from Start\n");
	display_start();
	printf("\nDispaly from End\n");
	display_end();
	
	printf("\nEnter Number to insert and its Position\n");
	scanf("%d%d",&midd,&position);
	insert_at_middle(midd,position);
	printf("\n\n\nAfter Insert at Middle in Doubly Link List\n");
	printf("Display from Start\n");
	display_start();
	printf("\nDispaly from End\n");
	display_end();
	
}

