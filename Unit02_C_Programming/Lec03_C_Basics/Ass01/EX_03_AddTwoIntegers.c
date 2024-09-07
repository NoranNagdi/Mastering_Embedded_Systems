
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1 =0, num2=0, sum=0;
	printf("Enter 2 integers: ");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	sum= num1+num2;
	printf("Sum: %d",sum);

	return 0;
}
