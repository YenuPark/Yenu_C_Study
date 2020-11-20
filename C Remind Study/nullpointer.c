
#include <stdio.h>

int main(void) {

	int data = 10;
	int* ptr1 = &data;

	//*ptr1 = &data;

	printf("%p\n", ptr1);
	printf("%d\n", data);

	return 0;
}