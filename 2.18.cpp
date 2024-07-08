#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2;

	printf("Enter 2 Integer Number : ");  /* prompt */
	scanf("%d %d", &num1, &num2);  /* input */

	if (num1 > num2) {
		printf("%d is larger.", num1);  /* If num1 is greater than num2 then print */
	} /* end if */

	if (num2 > num1) {
		printf("%d is larger.", num2); /* If num2 is greater than num1 then print */
	}  /* end if */

	if (num1== num2) {
		printf("These number are equal."); /* If num1 is equal to num2 then print */
	} /* end if */

	return 0;
}