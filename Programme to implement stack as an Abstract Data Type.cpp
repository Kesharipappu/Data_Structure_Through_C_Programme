//Programme to implement stack as an Abstract Data Type
#include<stdio.h>
#define MAX 5

struct stack
{
	int a[MAX];
	int top;
};

init_stack(struct stack *s1)
{
	s1->top = -1;
}

push(struct stack *s1, int x)
{
	if(s1->top == MAX - 1)
	{
		printf("Stack is Full\n");
	}
	else
	{
		s1->top++;
		s1->a[s1->top] = x;
	}
}

pop(struct stack *s1)
{
	int data;
	if(s1->top  == -1)
	{
		printf("Stack is Empty\n");
		return 0;
	}
	else
	{
		data = s1->a[s1->top];
		s1->a[s1->top] = 0;
		s1->top--;
		return data;
	}
}

display(struct stack *s1)
{
	int c;
	if(s1->top == -1)
	{
		printf("Stack is Empty\n");
		return;
	}
	else
	{
		for(c = s1->top; c >= 0; --c)
		{
			printf("%d\n",s1->a[c]);
		}
	}
}
main()
{
	struct stack s;
	int r;
	init_stack(&s);
	push(&s, 15);
	push(&s, 10);
	push(&s, 31);
	push(&s, 5);
	printf("Before Delete Number in Stack\n");
	display(&s);
	r = pop(&s);
	printf("\n\nDeleted item is = %d",r);
	r = pop(&s);
	printf("\nDeleted item is = %d\n",r);
	printf("\nAfter Delete Number in Stack\n");
	display(&s);
	return 0;
}
