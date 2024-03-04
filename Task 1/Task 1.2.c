#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	printf("Simple calculator:\n");
	printf("------------------\n");

	printf("1st operand: ");
	scanf_s("%d", &num1);                                  
	printf("2nd operand: ");
	scanf_s("%d", &num2);                                  
	printf("\n");

	printf("%d + %d = %d\n", num1, num2, num1 + num2);     
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	return 0;
}