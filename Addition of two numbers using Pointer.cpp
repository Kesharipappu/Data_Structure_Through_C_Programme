//Addition of two numbers using Pointer
#include<stdio.h>
main()
{
	int x, y, *p, *p1, r;
	printf("Enter two Numbers\n");
	scanf("%d%d",&x,&y);
	p = &x;
	p1 = &y;
	r = *p + *p1;
	printf("Sum of two Numbers is = %d",r); 
}
