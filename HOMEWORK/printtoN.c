#include <stdio.h>

int main() {
	printf("Print numbers from 1 to N.\n");
	int a = 0;
	scanf("%d", &a);

	for(int i = 1; i <= a; i++) {
		printf("%d ", i);
	}
	printf("\n");	

	return 0;
}
