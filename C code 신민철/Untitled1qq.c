#include<stdio.h>
#define num 7
int main(void){
	int i;
char number[num]  = {'C','A','D','G','F','E','B'};
    for (i = 1; i < num; i++) {
           int target = number[i];  // 기준
           int cur = i - 1;   // 비교할 대상
           while (cur >= 0 && target < number[cur]) {
            number[cur + 1] = number[cur];   // 비교대상이 큰 경우 오른쪽으로 밀어냄
            cur--;
            }
    number[cur + 1] = target;  // 기준값 저장
}
 
 
for (i = 0; i < num; i++) {
    printf("[%c]",number[i]);
}
}
