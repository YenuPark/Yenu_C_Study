#include <stdio.h>

int main(void) {
	int m = 100, n = 200, dummy;
	printf("%d %d \n", m, n);
	
	int* p = &m; //*p = m
	dummy = *p; //dummy = m = *p = 100

	*p = n; // *p�� n�� �� 200
	p = &n; //p�� n�� ����Ű�� �Ѵ�

	*p = dummy; // *p = n �̹Ƿ� n�� dummy = 100

	printf("%d %d \n", m, n);
}