//Search a number in single Link_List
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

void search(int s_n)
{
	int position = 0;
	struct node *t;
	if(start == NULL)
	printf("Link List is Empty\n");
	else
	{
		t = start;
		while(t != NULL)
		{
			if(t->data == s_n)
			{
				break;
			}
			++position;
			t = t->next;
		}
	}
	if(t == NULL)
	printf("Data Not Exist in Link List\n");
	else
	printf("%d is found at position %d",s_n, position+1);
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
	int no_nodes, c, num, position, search_number;
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
	printf("Enter a Number to Search in Link List.\n");
	scanf("%d",&search_number);
	search(search_number);
	return 0;
}






