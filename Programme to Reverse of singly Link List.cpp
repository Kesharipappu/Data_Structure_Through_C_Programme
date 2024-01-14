//Programme to Reverse of singly Link List
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*start;

create(int num)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
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

display()
{
	struct node *t;
	if(start == NULL)
	{
		printf("Link List is Empty\n");
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

reverse()
{
	struct node *p1, *p2, *p3;
	p1 = start;
	p2 = p1->next;
	p3 = p2->next;
	p1->next = NULL;
	p2->next = p1;
	while(p3 != NULL)
	{
		p1 = p2;
		p2 = p3;
		p3 = p3->next;
		p2->next = p1;
	}
	start = p2;
}

main()
{
	int number, c, element;
	printf("How Many Elements you want in Link List\n");
	scanf("%d",&element);
	printf("Enter Elements in Link List\n\n");
	for(c = 0; c < element; c++)
	{
		printf("Enter Number\n");
		scanf("%d",&number);
		create(number);
	}
	printf("\nBofore Reverse in Link List\n");
	display();
	reverse();
	printf("\nAfter Reverse in Link List\n");
	display();
}
