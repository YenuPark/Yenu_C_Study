#include <stdio.h>
int main(void) {
	int i = 20;
	int* pi = &i; //*pi=i
	int** dpi = &pi; // *�� &�� �ϳ��� ���� *dpi=pi, �� *dpi�� pi�� �ּҸ� ��Ÿ��


	//���� i�� �ּҸ� ��Ÿ���� 3���� ���
	printf("%p %p %p \n", &i, pi, *dpi);

	*pi = i + 2;
	printf("%d %d %d\n", i, *pi, **dpi);

	**dpi = *pi + 2;
	printf("%d %d %d\n", i, *pi, **dpi);

	return 0;

}