//Program to add Two Polynomials
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct poly
{
	int coeff;
	int expo;
	struct poly *next;
};


main()
{
	struct poly *start1, *start2, start3;
	start1 = start2 = start3 = NULL;
	create_poly(&start1, 5, 4);
	create_poly(&start1, 10, 3);
	create_poly(&start1, 7, 1);
	create_poly(&start1, 4, 0);
	create_poly(&start2, 6, 4);
	create_poly(&start2, 5, 3);
	create_poly(&start2, 3, 2);
	dispaly(&start1);
	display(&start2);
	add_poly(&start1, &start2, &start3);
	display(&start3);
		
}
