//Call by Reference concatenate of two Link Link
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

create(struct node **s, int num)
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

concatenate(struct node **s1, struct node **s2)
{
	struct node *t;
	if(*s1 == NULL)
	{
		*s1 = *s2;
	}
	else
	{
		t = *s1;
		while(t->next != NULL)
		{
			t = t->next;
		}
		t->next = *s2;
	}
}

main()
{
	struct node *start1, *start2;
	start1 = start2 = NULL;
	create(&start1,10);
	create(&start1,15);
	create(&start1,8);
	create(&start1,25);
	create(&start2,70);
	create(&start2,55);
	create(&start2,33);
	printf("Elements in First Link List:\n");
	display(&start1);
	printf("\nElements in Second Link List:\n");
	display(&start2);
	concatenate(&start1,&start2);
	printf("\nAfter Concatinate two Link List. Elements are\n");
	display(&start1);
}
