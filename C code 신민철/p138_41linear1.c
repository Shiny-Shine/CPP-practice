//선형 검색(p138_41linear1) 
#include<stdio.h>
int main(void){
	int i, n, flag=0, cnt=0, a[10], b[10];
	
	srand(time(NULL));
	for(i=0; i<9; i++)	a[i]=1+rand()%9;
	printf("검색할 숫자를 1~9 까지 정수로 입력하시오 : ");
	n=getche()-'0';
	
	putchar('\n');
	
	for(i=0; i<9; i++)	if(a[i] == n)	b[cnt++] = i+1;
	
	if(cnt == 0) printf("\n%d은(는) 없습니다.\n", n);
	else {
		printf("%d 는 배열의", n);
		for(i=0; i<cnt; i++)	printf(" %d,",b[i]);
		printf("\b번째에 위치합니다.\n");
	}
	printf("\n배열 => ");
	for(i=0; i<9; i++)	printf("%d	", a[i]);
}
