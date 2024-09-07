
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num1,num2;
	char operator;
	printf("Enter operator either + or - or * or divide: ");
	fflush(stdout);
	scanf("%c",&operator);
	printf("Enter 2 operands: ");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);

	switch(operator)
	{
	case '+':
		printf("%0.2f + %0.2f = %0.2f",num1,num2,num1+num2);
		break;
	case '-':
		printf("%0.2f - %0.2f = %0.2f",num1,num2,num1-num2);
		break;
	case '*':
		printf("%0.2f * %0.2f = %0.2f",num1,num2,num1*num2);
		break;
	case '/':
		printf("%0.2f / %0.2f = %0.2f",num1,num2,num1/num2);
		break;
	default:
		printf("Not Valid Operator");
		break;
	}
	return 0;
}
