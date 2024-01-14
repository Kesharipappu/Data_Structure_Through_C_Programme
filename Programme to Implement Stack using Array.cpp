//Programme to Implement Stack using Array
#include<stdio.h>
#define MAX 5
int stack [MAX];
int top = -1;

push(int num)
{
	if(top == MAX - 1)
	{
		printf("Stack is Full\n");
	}
	else
	{
		++top;
		stack[top] = num;
	}
}

pop()
{
	int data;
	if(top == -1)
	{
		printf("Stack is Empty\n");
		return 0;
	}
	else
	{
		data = stack[top];
		stack[top] = 0;
		--top;
		return data;
	}
}

display()
{
	int c;
	if(top == -1)
	{
		printf("Stack is Empty\n");
		return 0 ;
	}
	else
	{
		for(c = top; c >= 0; --c)
		{
			printf("%d\n",stack[c]);
		}
	}
}

main()
{
	int r;
	push(15);
	push(25);
	push(10);
	push(11);
	push(9);
	printf("Number Before Pop in Stack\n");
	display();
	r = pop();
	printf("\n\nDeleted item is = %d\n",r);
	r = pop();
	printf("Deleted item is = %d\n",r);
	printf("\nNumber After Pop in Stack\n");
	display();
}
