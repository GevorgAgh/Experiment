#include <stdio.h>

int main() 
{
	printf("Type a three-digit number and get the sum of it's digits as return.\n");
	int num = 0;
	int hundreds = 0;
	int tens = 0;
	int ones = 0;
	scanf("%d", &num);
	if (num >= 100 & num <= 999) {
		printf("Nice!\n");
	} else {
		printf("Not a three-digit number.\n");
		return 1;
	}
	hundreds = num / 100;
	tens = (num / 10) % 10;
	ones = num % 10;
	printf("The sum of digits is: %d\n", hundreds + tens + ones);

	return 0;
}
