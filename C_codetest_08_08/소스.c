//약수의 개수와 덧셈
//문제 설명
//두 정수 left와 right가 매개변수로 주어집니다.left부터 right까지의 모든 수들 중에서, 
//약수의 개수가 짝수인 수는 더하고, 약수의 개수가 홀수인 수는 뺀 수를 return 하도록 solution 함수를 완성해주세요.
//제한사항
//1 ≤ left ≤ right ≤ 1, 000

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;

    for (left; left <= right; left++) {
        int count = 1;
        for (int i = 2; i <= left; i++)
            if (left % i == 0) count++;
        if (count % 2 == 0) answer += left;
        else answer -= left;
    }
    return answer;
}
int main()
{
    int l, r;
    scanf_s("%d %d", &l, &r);
    solution(l, r);
    return 0;
}