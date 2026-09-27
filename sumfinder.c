#include <stdio.h>

int main() {
	printf("How many numbers do you want to add?\n");
	int size = 0;
	scanf("%d", &size);
	const int* const psize = &size;
	int num[*psize];
	printf("Type the numbers to find the sum.\n");
	int sum = 0;
	for(int i = 0; i < *psize; ++i) {
		scanf("%d", &num[i]);
		sum += num[i];
	}
	printf("Sum: %d \n", sum);

	return 0;
}
