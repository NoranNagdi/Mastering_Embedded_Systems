#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num;
	printf("Enter a Number: ");
	fflush(stdout);
	scanf("%f",&num);
	if(num>0)
	{
		printf("%0.2f is Positive",num);
	}
	else if(num<0)
	{
		printf("%0.2f is Negative",num);
	}
	else
	{
		printf("You Entered Zero");
	}

	return 0;
}
