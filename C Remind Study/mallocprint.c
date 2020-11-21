#include <stdio.h>
int main(void) {

	int* pi, i;
	pi = (int*)malloc(5 * sizeof(int));


	if (pi == NULL) {
		printf("동적 메모리 할당에 실패했습니다. \n");
		exit(1);
	}

	pi[0] = 100; //*pi[0]은 X
	pi[1] = 200;

	printf("%d \n", pi[0]);
	printf("%d \n", *(pi+1)); //*pi[1]은 X


}