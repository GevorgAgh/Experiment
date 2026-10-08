#include <stdio.h>

int main() 
{
	printf("Type 2 numbers and they will be listed in a swaped order.\n");
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int tmp = a;
	a = b;
	b = tmp;
	printf("Swaped: %d, %d\n", a, b);

	return 0;
}
