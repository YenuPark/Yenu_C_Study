#include <stdio.h>

int solution(int num) {

	// �Ű����� int�� 'num'�� ���, 626331�� ��� �� �����÷ο찡 �߻��Ͽ�
	// long long������ �ڷ����� �ٲ��ش�
	long long n = num;


	for (int i = 0; i < 500; i++) {
		if (n == 1) //n==1�ϰ�� (����)
			return i;

		else if (n % 2 == 0) //��� �� = ¦��
			n /= 2;

		else //��� �� = Ȧ��
			n = (n * 3) + 1;


		return -1;
	}