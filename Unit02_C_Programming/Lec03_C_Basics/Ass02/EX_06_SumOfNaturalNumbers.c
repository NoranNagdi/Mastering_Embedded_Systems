
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num,sum=0;
	printf("Enter an Integer: ");
	fflush(stdout);
	scanf("%d",&num);
	for(int i=1; i<=num; i++)
	{
		sum+=i;
	}
	printf("Sum = %d",sum);

	return 0;
}