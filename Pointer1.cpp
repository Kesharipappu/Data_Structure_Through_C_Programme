#include<stdio.h>
main()
{
	int x = 10, *p;
	p = &x;
	printf("%d\n",x);
	printf("%d\n",*p);
	printf("%d\n",*(&x));
	printf("%u\n",p);
	printf("%u\n",&x);
	printf("%u\n",&p);
}
