//Programme to create a Polynomial Linked List
#include<stdio.h>
#include<stdlib.h>

struct poly
{
	int coff;
	int expo;
	struct poly *next;
}*start;

create_polynomial(int coe, int exp)
{
 	struct poly *temp, *t;
 	temp = (struct poly*)malloc(sizeof(struct poly));
 	temp->coff = coe;
 	temp->expo = exp;
 	temp->next = NULL;
 	if(start == NULL || exp > start->expo)
 	{
 		temp->next = start;
 		start = temp;
	}
	else
	{
		t = start;
		while(t->next != NULL && t->next->expo > exp)
		{
			t = t->next;
		}
		temp->next = t->next;
		t->next = temp;
	}
}

display()
{
	struct poly *t;
	t = start;
	if(start == NULL)
	{
		printf("No Polynomial Exist\n");
	}
	while(t != NULL)
	{
		printf("%dX^%d ",t->coff,t->expo);
		if(t->next != NULL)
		{
			printf("+ ");
		}
		t = t->next;
	}
}

main()
{
	int no_nodes, c, co, ex;
	printf("Enter How Many Nodes you Want\n");
	scanf("%d",&no_nodes);
	for(c = 0; c < no_nodes; c++)
	{
		printf("Enter the value of Coffecient and Exponent\n");
		scanf("%d%d",&co,&ex);
		create_polynomial(co,ex);
	}
	display();
	return 0;
}
