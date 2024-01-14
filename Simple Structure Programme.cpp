//Simple Structure Programme
#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[20];
};

int main()
{
	struct student x = {2, "Ram"};	
	struct student y, z;
	
	y.roll_no = 5;
	strcpy(y.name,"Mohan");
	
	printf("Roll Number and Name of X\n");
	printf("%d\t%s\n",x.roll_no,x.name);
	
	printf("Roll Number and Name of Y\n");
	printf("%d\t%s\n",y.roll_no,y.name);
	
	printf("Enter Roll number and Name for z\n");
	scanf("%d%s",&z.roll_no,z.name);
	
	printf("Roll Number and Name of Z\n");
	printf("%d\t%s",z.roll_no,z.name);
}
