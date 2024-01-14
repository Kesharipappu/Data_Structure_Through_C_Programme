//Enter elements in Array & display using Pointer
#include<stdio.h>
main()
{
	int a[5] = {2,5,8,6,9}, c;
	for(c = 0; c < 5; c++)
	printf("%d\n",*(a+c));
	
}
