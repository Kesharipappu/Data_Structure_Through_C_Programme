//Call by Reference Selection Sort Link List
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

void create(struct node **s, int num)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = NULL;
	if(*s == NULL)
	{
		*s = temp;
	}
	else
	{
		t = *s;
		while(t->next != NULL)
		{
			t = t->next;
		}
		t->next = temp;
	}
}

display(struct node **s)
{
	struct node *t;
	if(*s == NULL)
	{
		printf("Link List is Empty\n");
	}
	else
	{
		t = *s;
		while(t->next != NULL)
		{
			printf("%d\t",t->data);
			t = t->next;
		}
		printf("%d\t",t->data);
	}
}

void sort(struct node **s)
{
	struct node *temp, *p;
	int t;
	for(p = *s; p->next != NULL; p = p->next)
	{
		for(temp = p->next; temp != NULL; temp = temp->next)
		{
			if(p->data > temp->data)
			{
				t = p->data;
				p->data = temp->data;
				temp->data = t;
			}
		}
	}
}

main()
{
	struct node *start1;
	start1 = NULL;
	create(&start1,15);
	create(&start1,10);
	create(&start1,8);
	create(&start1,25);
	printf("Elements in Link List:\n");
	display(&start1);
	sort(&start1);
	printf("\nAfter Sorting Elements in Link List\n");
	display(&start1);
}

