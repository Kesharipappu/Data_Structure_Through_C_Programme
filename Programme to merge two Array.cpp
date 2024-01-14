//write a Programme to merge two Array
#include<stdio.h>
main()
{
	int a[5], b[5], r[10], c, d=0, e=0;
	printf("Eleter element in Array A\n");
	for(c = 0; c < 5; c++)
	{
		scanf("%d",&a[c]);	
	} 
	
	printf("Enter element in Array B\n");
	
	for(c =0; c < 5; c++)
	{
		scanf("%d",&b[c]);
	}
	
	printf("Elements of Array A\n");
	
	for(c = 0; c < 5; c++)
	{
		printf("%d\n",a[c]);
	}
	
	printf("Elements of Array B\n");
	
	for(c= 0; c <5; c++)
	{
		printf("%d\n",b[c]);
	}
	
	c = 0;
	
	while(c < 5 && d < 5)
	{
		if(a[c] < b[d])
		{
			r[e] = a[c];
			c++;
		}
		else
		{
			r[e] = b[d];
			d++;
		}
		e++;
	}
	
	while(c < 5)
	{
		r[e] = a[c];
		c++;
		e++;
	}
	
	while(d < 5)
	{
		r[e] = b[d];
		d++;
		e++;
	}
	
	printf("Merged Array\n");
	for(c = 0; c <10; c++)
	{
		printf("%d\n",r[c]);
	}
	
}
