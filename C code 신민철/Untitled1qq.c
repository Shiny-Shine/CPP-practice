#include<stdio.h>
#define num 7
int main(void){
	int i;
char number[num]  = {'C','A','D','G','F','E','B'};
    for (i = 1; i < num; i++) {
           int target = number[i];  // ����
           int cur = i - 1;   // ���� ���
           while (cur >= 0 && target < number[cur]) {
            number[cur + 1] = number[cur];   // �񱳴���� ū ��� ���������� �о
            cur--;
            }
    number[cur + 1] = target;  // ���ذ� ����
}
 
 
for (i = 0; i < num; i++) {
    printf("[%c]",number[i]);
}
}
