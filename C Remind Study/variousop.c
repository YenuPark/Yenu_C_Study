#include<stdio.h>
int main(void) {
	int i;
	int* pi = &i;
	int** dpi = &pi;

	*pi = 5;
	*pi += 1;
	printf("%d \n", i);
	printf("%d \n", (*pi)++);
	//후위 연산자이므로(*pi)++가 수행되고 +1이 증감하므로 printf상에서는 증감이 안찍힘

	printf("%d \n", *pi);

	*pi = 10;
	//전위 연산자이므로 모두 printf 출력된다
	printf("%d \n", ++ * pi);
	printf("%d \n", ++ * *dpi);
	printf("%d \n", i);

	return 0;
}