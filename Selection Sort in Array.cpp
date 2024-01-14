//Selection Sort in Array
#include<stdio.h>

main()
{
	int a[5],c;
	printf("Enter Number in Array\n");
	for(c = 0; c < 5; c++)
	{
		scanf("%d",&a[c]);
	}
	
	sort(a,5);
	printf("Sorted Array is\n");
	for(c = 0; c < 5; c++)
	{
		printf("%d\t",a[c]);
	}
	
}

sort(int a1[], int size)
	{
		int c, d, t;
		for(c = 0; c < size - 1; c++)  //This loop is for number selection
		{
			for(d = c + 1; d < size; d++) //This loop is for comparison
			{
				if(a1[c] > a1[d])
				{
					t = a1[c];
					a1[c] = a1[d];
					a1[d] = t;
				}
			}
		}
	}
