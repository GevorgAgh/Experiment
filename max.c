#include <stdio.h>

int main() {
	printf("Type 3 numbers to figure out the max\n");
	int arr[3] = {0};
	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (int i = 1; i < 3; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("The max is: %d\n", max);
	
	return 0;
}
