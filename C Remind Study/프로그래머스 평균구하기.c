#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {

    int sum = 0;
    double answer = 0;

    for (int i = 0; i < arr_len; i++) {
        sum += arr[i];
    }

    answer = sum / (double)arr_len;
    //(double) 강제형변환 하지 않으면 정수로만 출력됨
    //따라서 (double)sum/arr_len 또는
    //sum/(double)arr_len 으로 출력

    return answer;
}