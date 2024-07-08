#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2, sum, product, difference, quotient, remainder; 

	printf("Enter 2 Integer Number : ");  /* prompt */
	scanf("%d %d", &num1, &num2);  /* input */

	sum = num1 + num2;
	product = num1 * num2;
	difference = num1 - num2;
	quotient = num1 / num2;
	remainder = num1 % num2;

	printf("Sum is : %d\n", sum);
	printf("Product is : %d\n", product);
	printf("Difference is : %d\n", difference);
	printf("Quotient is : %d\n", quotient);
	printf("Remainder is : %d\n", remainder);

	return 0;
}