#include <stdio.h>
int main(void) {
	int i = 20;
	int* pi = &i; //*pi=i
	int** dpi = &pi; // *과 &를 하나씩 떼면 *dpi=pi, 즉 *dpi는 pi의 주소를 나타냄


	//변수 i의 주소를 나타내는 3가지 방법
	printf("%p %p %p \n", &i, pi, *dpi);

	*pi = i + 2;
	printf("%d %d %d\n", i, *pi, **dpi);

	**dpi = *pi + 2;
	printf("%d %d %d\n", i, *pi, **dpi);

	return 0;

}