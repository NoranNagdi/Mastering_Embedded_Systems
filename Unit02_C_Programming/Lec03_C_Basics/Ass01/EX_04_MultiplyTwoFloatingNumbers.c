#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num1,num2,product;
	printf("Enter 2 numbers: ");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	product = num1*num2;
	printf("Product: %f",product);

	return 0;
}