//함수(p153_bubble1)
#include<stdio.h>
#define NO 10

void swap(int *x, int *y){		//반환값이 2개기때문에 보이드 포인터를 이용한 연산을 한다 
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
} 

int main(void){
	int i, j, s[NO];
	
	srand(time(NULL));
	printf("발생된 난수 => ");
	for(i=0; i<NO; i++){
		s[i] = 1+rand()%100;
		printf("%3d,", s[i]);
	} 
	
	for(i=0; i<NO-1; i++){
		for(j=i+1; j<NO; j++)	if(s[i] > s[j])	swap(&s[i], &s[j]);
	}
	printf("\b \n정렬된 함수 => ");
	for(i=0; i<NO; i++)	printf("%3d,", s[i]);
	printf("\b ");
	
}
