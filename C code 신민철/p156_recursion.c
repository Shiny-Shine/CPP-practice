//��Ÿ ���1(p156_recursion)
#include<Stdio.h>

int f(int n){
	if(n>0){
		f(n-1);
		printf("�� ��");
	}
} 

int main(void){
	int n;
	
	printf("����� ���� ������? => ");
	scanf("%d", &n);
	f(n);
}
