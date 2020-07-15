#include<stdio.h>
int main()
{
	int per;
	printf("Enter the percentage:");
	scanf("%d",&per);
	if(per>=80)
	printf("The grade is A");
	else if(per<80 && per>=70)
	printf("The grade is B");
	else if(per<70 && per>=60)
	printf("The grade is C");
	else if(per<60 && per>=45)
	printf("The grade is D");
	else 
	printf("Fail");
}
	
