//함수(p151_function)
#include<stdio.h>
#define NO 10

int big(int x, int y){
	if(x>y)	return x;
	else return y;
}

int main(void){
	int i, max, s[NO];
	
	srand(time(NULL));
	printf("** 난수 **\n");
	for(i=0; i<NO; i++){
		s[i] = 1+rand()%100;
		printf("%2d => %3d\n", i+1, s[i]);
	}
	max=s[0];
	for(i=1; i<NO; i++)	max=big(max, s[i]);
	printf("-------------------------------\n");
	printf("가장 큰 수는 %d 입니다.", max);
	
	return 0;
}
