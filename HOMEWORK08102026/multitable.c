#include <stdio.h>

int main() {
	printf("Multiplication table.\n");
	int num = 0;
	scanf("%d", &num);

	for(int i = 1; i <= 10; i++) {
		int sum = i * num;
		printf("%d * %d = %d\n", num, i, sum);
	}
	
	return 0;
}
