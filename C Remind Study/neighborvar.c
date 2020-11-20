#include <stdio.h>
int main(void) {
	int a = 1, b = 3, c = 6;

	printf("변수명   저장값  주소값   \n");
	printf("-----------------------\n");
	printf("  c       %d       %p  \n", c, &c);
	printf("  b       %d       %p  \n", b, &b);
	printf("  a       %d       %p  \n", a, &a);

	int* p = &c;
	printf("  c       %d       %p  \n", *p, p);

	//정수 int와 int 사이는 주소값으로 그 차이가 절대 값으로 12정도 차이가 난다.
	//즉, 나중에 선언되는 변수의 주소값이 12가 작다.
	printf("  b       %d       %p  \n", *(p+3), p+3); 
	printf("  a       %d       %p  \n", *(p+6), p+6);
}