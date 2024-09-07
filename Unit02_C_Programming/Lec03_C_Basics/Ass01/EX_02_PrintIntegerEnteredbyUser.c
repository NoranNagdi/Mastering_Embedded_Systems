#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num =0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&num);
	printf("You Entered: %d",num);

	return 0;
}