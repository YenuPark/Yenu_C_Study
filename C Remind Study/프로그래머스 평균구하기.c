#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// arr_len�� �迭 arr�� �����Դϴ�.
double solution(int arr[], size_t arr_len) {

    int sum = 0;
    double answer = 0;

    for (int i = 0; i < arr_len; i++) {
        sum += arr[i];
    }

    answer = sum / (double)arr_len;
    //(double) ��������ȯ ���� ������ �����θ� ��µ�
    //���� (double)sum/arr_len �Ǵ�
    //sum/(double)arr_len ���� ���

    return answer;
}