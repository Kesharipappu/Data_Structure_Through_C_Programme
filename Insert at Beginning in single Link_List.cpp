//Insert at Beginning in single Link_List
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
} *start;

void display();

void create(int n)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = n;
	temp->next = NULL;
	if(start == NULL)
	{
		start = temp;
	}
	else
	{
		t = start;
		while(t->next != NULL)
		{
			t = t->next;
		}
		t->next = temp;
	}
}

void insert_at_beg(int fir)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = fir;
	temp->next = NULL;
	if(start == NULL)
	{
		start = temp;
	}
	else
	{
		temp->next = start;
		start =temp;
	}
}

void display()
{
	struct node  *t;
	if(start == NULL)
	printf("Link List is Empty\n");
	else
	{
		t = start;
		printf("Elements in Link List\n");
		while(t->next != NULL)
		{
			printf("%d ",t->data);
			t = t->next;
		}
		printf("%d\n",t->data);
	}
}

main()
{
	int no_nodes, c, num, first;
	start = NULL;
	printf("Enter the number of Nodes in Link-List\n");
	scanf("%d",&no_nodes);
	for(c = 0; c < no_nodes; c++)
	{
		printf("Enter a Number\n");
		scanf("%d",&num);
		create(num);
	}
	display();
	
	printf("Enter a Number to insert at Beginning in Link List\n");
	scanf("%d",&first);
	insert_at_beg(first);
	printf("After Inserting a Number at Begining in Link List\n");
	display();
	return 0;
}




