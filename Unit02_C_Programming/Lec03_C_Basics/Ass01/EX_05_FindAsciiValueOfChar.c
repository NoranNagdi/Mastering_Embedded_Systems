
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&c);
	printf("Ascii value of %c: %d",c,c);

	return 0;
}
