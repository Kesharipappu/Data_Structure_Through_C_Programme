//WAF to print sum of two real numbers

#include<stdio.h>
main()
{
	float a,b,r;
	float sum(float, float); // Prototype of function 
	printf("Enter two real numbers  ");
	scanf("%f%f",&a,&b); 
	r = sum(a,b);     //function call or Actual argument
	printf("Sum = %f",r);
}

float sum(float a1, float b1) //function definition or formal arguments
{
	float r;
	r = a1 + b1;
	return (r);
}

