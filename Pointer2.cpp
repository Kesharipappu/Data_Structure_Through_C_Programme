#include<stdio.h>
main()
{
	int x = 10, *p, **p1, ***p2;
	p = &x;
	p1 = &p;
	p2 = &p1;
	printf("%d",**p1);
}
