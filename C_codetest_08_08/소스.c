//����� ������ ����
//���� ����
//�� ���� left�� right�� �Ű������� �־����ϴ�.left���� right������ ��� ���� �߿���, 
//����� ������ ¦���� ���� ���ϰ�, ����� ������ Ȧ���� ���� �� ���� return �ϵ��� solution �Լ��� �ϼ����ּ���.
//���ѻ���
//1 �� left �� right �� 1, 000

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