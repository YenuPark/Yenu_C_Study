#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi = NULL;
	pi = (int*)malloc(sizeof(int));

	if (pi == NULL) {
		printf("�޸� �Ҵ翡 ������ �ֽ��ϴ�.");
		exit(1);
	}

	*pi = 3;
	printf("�ּҰ� : *pi = %d, ���尪 : p = %d\n", pi, *pi);

	free(pi);

	return 0;
}