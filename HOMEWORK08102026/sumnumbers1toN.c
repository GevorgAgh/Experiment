#include <stdio.h>

int main() {
	printf("Sum numbers from 1 to N.\n");
	int num = 0;
	scanf("%d", &num);

	int sum = 0;
	for(int i = 1; i <= num; i++) {
		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}
