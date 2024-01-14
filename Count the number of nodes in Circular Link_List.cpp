//Count the number of nodes in Circular Link_List
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
} *start;

void create(int n)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = n;
	temp->next = NULL;
	if(start == NULL)
	{
		start = temp;
		temp->next = start;
	}
	else
	{
		t = start;
		while(t->next != start)
		{
			t = t->next;
		}
		temp->next = start;
		t->next = temp;
	}
}

void count()
{
	int cnt = 1;
	struct node *t;
	if(start == NULL)
	printf("Link List is Empty\n");
	else
	{
		t = start;
		while(t->next != start)
		{
			cnt++;
			t = t->next;
		}
	}
	printf("Total Number of nodes in Circular Link List is = %d",cnt);
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
		while(t->next != start)
		{
			printf("%d ",t->data);
			t = t->next;
		}
		printf("%d\n",t->data);
	}
}

main()
{
	int no_nodes, c, num, position;
	start = NULL;
	printf("Enter the number of Nodes in Circular Link-List\n");
	scanf("%d",&no_nodes);
	for(c = 0; c < no_nodes; c++)
	{
		printf("Enter a Number\n");
		scanf("%d",&num);
		create(num);
	}
	display();
	count();	
	return 0;
}







