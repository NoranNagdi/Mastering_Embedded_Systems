
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num1,num2,num3,max;
	printf("Enter 3 Numbers: ");
	fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num3);
	max = num1;
	if(num2>max)
	{
		max = num2;
	}
	else if(num3>max)
	{
		max=num3;
	}
	printf("Largest Number: %0.2f",max);

	return 0;
}
