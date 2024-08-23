//함수(p153_bubble2)
#include<stdio.h>
#define NO 10

void bubble(int *s, int y){
	int i, j, temp;
	
	for(i=0; i<NO-1; i++){
		
		for(j=i+1; j<NO; j++){	//i 다음 데이터부터 선택해야 정렬됨 
			
			if(*(s+i) > *(s+j)){
				temp = *(s+i);
				*(s+i) = *(s+j);
				*(s+j) = temp;
			}
		}
	}
	
}

int main(void){
	int i, j, s[NO];
	
	srand(time(NULL));
	printf("발생된 난수 => ");
	for(i=0; i<NO; i++){
		s[i] = 1+rand()%100;
		printf("%3d,", s[i]);
	}
	bubble(s, sizeof(s)/sizeof(int));	//배열명(포인터), 배열의 요소 개수를 전달
	printf("\b \n정렬된 난수 => ");
	for(i=0; i<NO; i++)	printf("%3d,", s[i]);
	printf("\b"); 
}
