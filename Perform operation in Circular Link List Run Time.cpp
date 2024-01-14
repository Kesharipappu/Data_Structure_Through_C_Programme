//Perform operation in Circular Link List Run Time
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*start;

create_circular(int num)
{
	struct node *temp, *t;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = num;
	temp->next = NULL;
	if(start == NULL)
	{
		start = temp;
		temp->next = start;
	}
	else
	{
		t = start;
		while(t->next != start)
		{
			t = t->next;
		}
		temp->next = start;
		t->next = temp;
	}
}

display()
{
	struct node *t;
	if(start == NULL)
	{
		printf("Circular Link List is Empty\n");
	}
	else
	{
		t = start;
		while(t->next != start)
		{
			printf("%d\t",t->data);
			t = t->next;
		}
		printf("%d\t",t->data);
	}
}


main()
{
	int c, number;
	printf("Enter Number in Circular Link List\n");
	for(c = 0; c < 5; c++)
	{
		printf("\nEnter Number\n");
		scanf("%d",&number);
		create_circular(number);
	}
	printf("\nElements in Circular Link Lisl\n");
	display();
}
