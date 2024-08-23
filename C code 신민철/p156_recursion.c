//스타 출력1(p156_recursion)
#include<Stdio.h>

int f(int n){
	if(n>0){
		f(n-1);
		printf("응 엿");
	}
} 

int main(void){
	int n;
	
	printf("출력할 엿의 개수는? => ");
	scanf("%d", &n);
	f(n);
}
