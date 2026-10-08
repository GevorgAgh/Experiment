#include <stdio.h>

int main() 
{
	printf("Type a number to check whether it's even or odd.\n");
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("The numver is even.\n");
	} else {
		printf("The number is odd.\n");
	}
	
	return 0;
}
