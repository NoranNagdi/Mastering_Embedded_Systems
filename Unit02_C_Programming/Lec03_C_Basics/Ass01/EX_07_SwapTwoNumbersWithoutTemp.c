
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a,b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;

	printf("After swapping: value of a: %0.2f\n",a);
	printf("After swapping: value of b: %0.2f",b);

	return 0;
}