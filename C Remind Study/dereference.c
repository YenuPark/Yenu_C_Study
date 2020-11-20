#include <stdio.h>
int main(void) {
	int data = 100;
	char ch = 'A';
	int *ptrint = &data; //ptrint == data 값 동일
	char* ptrchar = &ch; //ptrchar == ch 값 동일
	printf("간접참조 출력 : %d %c\n", *ptrint, *ptrchar);

	*ptrint = 200; //변수 data를 *ptrint로 간접참조하여 내용 수정
	*ptrchar = 'B'; //변수 ch를 *ptrchar로 간접참조하여 내용 수정
	printf("직접참조 출력 : %d %c\n", data, ch);
}