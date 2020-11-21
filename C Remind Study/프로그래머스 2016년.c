#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char* week[7] = { "THU","FRI","SAT","SUN", "MON","TUE","WED" };
    int month[] = { 0, 31, 29, 30, 31, 30, 31, 30, 31, 30, 31, 30, 31 };
    int sum = 0;

    for (int i = 0; i < a; i++) {
        sum += month[i];
    }
    sum += b;

    char* answer = (char*)malloc(sizeof(char));
    answer = week[sum % 7];
    return answer;
}