#include <stdio.h>

int solution(int num) {

	// 매개변수 int형 'num'의 경우, 626331을 계산 시 오버플로우가 발생하여
	// long long형으로 자료형을 바꿔준다
	long long n = num;


	for (int i = 0; i < 500; i++) {
		if (n == 1) //n==1일경우 (최종)
			return i;

		else if (n % 2 == 0) //계산 값 = 짝수
			n /= 2;

		else //계산 값 = 홀수
			n = (n * 3) + 1;


		return -1;
	}