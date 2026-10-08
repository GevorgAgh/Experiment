#include <stdio.h>

int main()
{
	printf("Type a number and get the last digit as return.\n");
	int num = 0;
	scanf("%d", &num);
	printf("The last digit is: %d\n", num % 10);

	return 0;
}
