//Delete at middle(Desired place) in single Link_List
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

void delete_at_middle(int pos)
{
	int c = 1;
	struct node *temp, *t;
	if(start == NULL)
	printf("Link List is Empty\n");
	else
	{
		if(pos == 1)
		{
			temp = start;
			start = start->next;
			free(temp);
		}
		else
		{
			t = start;
			while(c < pos - 1)
			{
				t = t->next;
				c++;
			}
			temp = t->next;
			t->next = t->next->next;
			free(temp);
		}
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
	int no_nodes, c, num, position;
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
	
	printf("Enter Position to delete in Link List. Which you want\n");
	scanf("%d",&position);
	if(position > no_nodes)
	{
		printf("You have entered Invalid Position\n");
	}
	else
	{
		delete_at_middle(position);
		printf("After Deleting desired position in Link List\n");
		display();	
	}	
	return 0;
}






