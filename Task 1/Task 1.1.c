#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 7;  
	int num2 = 3;                                            

	printf("Simple calculator:\n");
	printf("------------------\n");

	printf("1st operand: %d\n", num1);
	printf("2nd operand: %d\n\n", num2);

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);     
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	return 0;
}