
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num;
	long long fact=1;
	printf("Enter an Integer: ");
	fflush(stdout);
	scanf("%d",&num);
	if(num<0)
	{
		printf("ERROR!!! Factorial of negative number doesn't exist");
	}
	else
	{
		for(int i=1; i<=num; i++)
		{
			fact*=i;
		}
		printf("Factorial = %ld",fact);
	}

	return 0;
}
