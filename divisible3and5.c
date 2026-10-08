#include <stdio.h>

int main()
{
	printf("Type a number to see whether it is divisible by both 3 and 5.\n");
	int num = 0;
	scanf("%d", &num);
	if (num % 3 == 0 & num % 5 == 0) {
		printf("Yes.\n");
	} else {
		printf("No.\n");
	}

	return 0;
}
