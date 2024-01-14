//Delete at End in single Link_List
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

void delete_at_end()
{
	struct node *t, *temp;
	if(start == NULL)
	printf("Link List is Empty\n");
	else
	{
		t = start;
		while(t->next->next != NULL)
		{
			t = t->next;
		}
		temp = t->next;
		t->next = NULL;
		free(temp);
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
	int no_nodes, c, num;
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
	
	delete_at_end();
	printf("After Deleting a Number at End in Link List\n");
	display();
	return 0;
}





