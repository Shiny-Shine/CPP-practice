//스타 출력 2(p157_recursion)
#include<stdio.h>
char star[20];
int f(int n){
	if(n>0){
		f(n-1);
		star[n] = '$';
		printf("%s\n", star+1);	//전역변수라서 0번이 NULL임. +1을 해주지않으면 NULL이 출력되 아무것도 안나옴 
	}
}

int main(void){
	int n;
	
	printf("출력할 딸라의 개수는? => ");
	scanf("%d", &n);
	f(n);
	switch(n){
		case 1: printf("일딸라는 너 무 적 소!");
		case 2: printf("투  딸 라! It's double! DOUBLE!!'");  
		return 0;
	}
	   
}
