
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char c;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&c);
	if(c=='a'||c=='A'||c=='i'||c=='I'||c=='e'||c=='E'||c=='o'||c=='O'||c=='u'||c=='U')
	{
		printf("%c is a vowel",c);
	}
	else
	{
		printf("%c is a consonant",c);
	}


	return 0;
}