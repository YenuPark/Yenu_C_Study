#include <stdio.h>
int main(void) {
	int data = 100;
	char ch = 'A';
	int *ptrint = &data; //ptrint == data �� ����
	char* ptrchar = &ch; //ptrchar == ch �� ����
	printf("�������� ��� : %d %c\n", *ptrint, *ptrchar);

	*ptrint = 200; //���� data�� *ptrint�� ���������Ͽ� ���� ����
	*ptrchar = 'B'; //���� ch�� *ptrchar�� ���������Ͽ� ���� ����
	printf("�������� ��� : %d %c\n", data, ch);
}