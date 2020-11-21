#include<stdio.h>
int main(void) {
	char c;
	char* p = &c;
	char* *dp = &p;

	*p = 'A';
	*p += 1;

	printf("%c\n", *p);
	printf("%c\n", ++*p);
	printf("%c\n", ++**dp);

	return 0;
}