#include <stdio.h>

int main() {
	printf("Sum until zero.\n");
	int sum = 0;
	int* psum = &sum;
	while(1 == 1) {
		int num = 0;
		scanf("%d", &num);
		if(num == 0) {
			break;
		} else {
			*psum += num;
		}
	}
	printf("%d\n", sum);

	return 0;
}
