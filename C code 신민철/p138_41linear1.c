//���� �˻�(p138_41linear1) 
#include<stdio.h>
int main(void){
	int i, n, flag=0, cnt=0, a[10], b[10];
	
	srand(time(NULL));
	for(i=0; i<9; i++)	a[i]=1+rand()%9;
	printf("�˻��� ���ڸ� 1~9 ���� ������ �Է��Ͻÿ� : ");
	n=getche()-'0';
	
	putchar('\n');
	
	for(i=0; i<9; i++)	if(a[i] == n)	b[cnt++] = i+1;
	
	if(cnt == 0) printf("\n%d��(��) �����ϴ�.\n", n);
	else {
		printf("%d �� �迭��", n);
		for(i=0; i<cnt; i++)	printf(" %d,",b[i]);
		printf("\b��°�� ��ġ�մϴ�.\n");
	}
	printf("\n�迭 => ");
	for(i=0; i<9; i++)	printf("%d	", a[i]);
}
