#include <stdio.h>
int main(void) {

	int* pi, i;
	pi = (int*)malloc(5 * sizeof(int));


	if (pi == NULL) {
		printf("���� �޸� �Ҵ翡 �����߽��ϴ�. \n");
		exit(1);
	}

	pi[0] = 100; //*pi[0]�� X
	pi[1] = 200;

	printf("%d \n", pi[0]);
	printf("%d \n", *(pi+1)); //*pi[1]�� X


}