//�Լ�(p148_function) 
#include<stdio.h>
int f(int big, int c){
	if(big>c)	return big;
	else return c;
}
int main(void){
	int a, b, c, max, big;
	printf("3���� ������ �Է��ϸ� ���� ū ������ ����մϴ�. => ");
	scanf("%d %d %d", &a, &b, &c);
	big = (a>b)? a:b;
	printf("%d\n", f(big, c));
}
