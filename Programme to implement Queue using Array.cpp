//Programme to implement Queue using Array
#include<stdio.h>
#define MAX 10
int queue[MAX];
int front =  -1;
int rear = -1;

insert(int num)
{
	if(rear == MAX - 1)
	{
		printf("Queue is Overflow\n");
	}
	++rear;   		   			//	queue[++rear] = num;
	queue[rear] = num;
	
	if(front == -1)
	{
		front = 0;
	}
	
}

delete()
{
	int x;
	if(front == -1)
	{
		printf("Queue is Empty\n");
	}
	
	x = queue[front];
	queue[front] = 0;
	printf("\n\nDeleted item = %d",x);
	if(front == rear)
	{
		front = rear = -1;
	}
	else
	{
		++front;
	}
}

display()
{
	int c;
	if(front == -1)
	{
		printf("Queue is Empty\n");
	}
	else
	{
		for(c = front; c <= rear; ++c)
		{
			printf("%d\t",queue[c]);
		}
	}
}
main()
{
	insert(15);
	insert(10);
	insert(14);
	insert(12);
	insert(50);
	printf("\Before Deletion Elements in Queue\n");
	display();
	delete();
	delete();
	printf("\n\nAfter Deletion Elements in Queue\n");
	display();
	return 0;
}
