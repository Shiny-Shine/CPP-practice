//메모리 할당(p201_malloc.c)
#include<stdio.h>

int main(void){
	int no, i, *ptn;
	
	srand(time(NULL));
	printf("필요한 난수의 개수는? => ");
	scanf("%d", &no);
	ptn = malloc(sizeof(int)*no);
		//heap영역에 저장 공간을 확보하고 시작 주소 저장
	
	for(i=0; i<no; i++)	*(ptn+i) = 40+rand()%61;
	for(i=0; i<no; i++) printf("%3d => %3d\n", i+1, *(ptn+i));
	
	free(ptn);
} 
