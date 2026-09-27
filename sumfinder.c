#include <stdio.h>

int main() {
	const int size = 10;
	const int* const psize = &size;
	int num[*psize];
	printf("Type 10 numbers to find the sum of them.\n");
	int sum = 0;
	for(int i = 0; i < *psize; ++i) {
		scanf("%d", &num[i]);
		sum += num[i];
	}
	printf("Sum: %d \n", sum);

	return 0;
}
