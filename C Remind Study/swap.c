#include <stdio.h>

int main(void) {
	int m = 100, n = 200, dummy;
	printf("%d %d \n", m, n);
	
	int* p = &m; //*p = m
	dummy = *p; //dummy = m = *p = 100

	*p = n; // *p는 n의 값 200
	p = &n; //p가 n을 가르키게 한다

	*p = dummy; // *p = n 이므로 n에 dummy = 100

	printf("%d %d \n", m, n);
}