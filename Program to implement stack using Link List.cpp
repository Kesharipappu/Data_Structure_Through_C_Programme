//Program to implement stack using Link List
#include<stdio.h>
#include<stdlib.h>

struct stack
{
	int data;
	struct stack *next;
}*top;

push(int num)
{
    struct stack *temp;
    temp = (struct stack*)malloc(sizeof(struct stack));
    temp->data = num;
    temp->next = top;
    top = temp;
}

pop()
{
	struct stack *temp;
	int n;
	if(top == NULL)
	{
		printf("Stack is Empty\n");
		return 0;
	}
	else
	{
		temp = top;
		n = top->data;
		top = top->next;
		free(temp);
		return (n);
	}
}

display()
{
	struct stack *t;
	if(top == NULL)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		t = top;
		while(t->next != NULL)
		{
			printf("%d\n",t->data);
			t = t->next;
		}
		printf("%d\n",t->data);
	}
}

main()
{
	int x;
	top = NULL;
	push(15);
	push(20);
	push(11);
	push(9);
	printf("Before Delete. Item in Stack\n");
	display();
	x = pop();
	printf("\nDeleted item = %d",x);
	printf("\nAfter Delete. Item in Stack\n");
	display();
}

