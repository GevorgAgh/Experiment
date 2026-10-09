#include <stdio.h>

int main() {
	printf("Print even numbers.\n");
	int num = 0;
	scanf("%d", &num);

	for(int i = 1; i <= num; i++) {
		if(i % 2 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}
