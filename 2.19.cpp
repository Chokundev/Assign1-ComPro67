#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2, num3, sum, average, product, smallest, largest;

	printf("Input three different integers : ");  /* prompt */
	scanf("%d %d %d", &num1, &num2, &num3);  /* input */

	sum = num1 + num2 + num3;
	average = sum / 3;
	product = num1 * num2 * num3;

	/* largest condition */
	if(num1 > num2) {
		if (num1 > num3) {
			largest = num1;
		}
		else {
			largest = num3;
		}
	}else {
		if (num2 > num3) {
			largest = num2;
		}
		else {
			largest = num3;
		}
	}
	/* end largest condition */

	/* smallest condition */
	if (num1 < num2) {
		if (num1 < num3) {
			smallest = num1;
		}
		else {
			smallest = num3;
		}
	}
	else {
		if (num2 < num3) {
			smallest = num2;
		}
		else {
			smallest = num3;
		}
	}
	/* end smallest condition */

	/* Print Result */
	printf("Sum is %d\n", sum);
	printf("Average is %d\n", average);
	printf("Product is %d\n", product);
	printf("Smallest is %d\n", smallest);
	printf("Largest is %d\n", largest);
	/* end Print Result */

	return 0;
}