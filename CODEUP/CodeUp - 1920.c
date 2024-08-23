//CodeUp - 1920 (재귀함수) 2진수 변환
#include<stdio.h>

int i = 0;
int two(int n1, int n2[10000]){
	if(n1 == 0){
		if(i == 0)	return 0;
		
		i--;
		printf("%d", n2[i]);
		return two(n1, n2);
	}
	else{
		if(n1 % 2 == 0){
			n2[i] = 0;
			i++;
		}
		else if(n1% 2 == 1){
			n2[i] = 1;
			i++;
		}
		return two(n1/2 , n2);
	}
}

int main(void){
	int n1;
	int n2[10000];
	scanf("%d", &n1);
	two(n1, n2);
	if(n1 == 0){
		printf("%d", n1);
	}
	
	return 0;
}
