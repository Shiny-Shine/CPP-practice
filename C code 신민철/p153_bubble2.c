//�Լ�(p153_bubble2)
#include<stdio.h>
#define NO 10

void bubble(int *s, int y){
	int i, j, temp;
	
	for(i=0; i<NO-1; i++){
		
		for(j=i+1; j<NO; j++){	//i ���� �����ͺ��� �����ؾ� ���ĵ� 
			
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
	printf("�߻��� ���� => ");
	for(i=0; i<NO; i++){
		s[i] = 1+rand()%100;
		printf("%3d,", s[i]);
	}
	bubble(s, sizeof(s)/sizeof(int));	//�迭��(������), �迭�� ��� ������ ����
	printf("\b \n���ĵ� ���� => ");
	for(i=0; i<NO; i++)	printf("%3d,", s[i]);
	printf("\b"); 
}
