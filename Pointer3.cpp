#include<stdio.h>
main()
{
	int x = 10, *p, **p1, ***p2;
	p = &x;
	p1 = &p;
	p2 = &p1;
	printf("%d\n",x);
	printf("%d\n",*p);
	printf("%d\n",*(&x));
	printf("%u\n",p);
	printf("%u\n",&p);
	printf("%u\n",**p1);
	printf("%u\n",***p2);
}
