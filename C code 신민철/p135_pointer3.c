//포인터(p135_pointer3)
#include<stdio.h>
main(){
	int i, j, a[3][2]={{11, 12}, {21, 22},{31, 32}};
	
	printf("=== 각 행의 주소(address) 출력 ===\n");
	for(i=0; i<3; i++)
		printf("a+%d : %d\n", i, a[i]);
	
	printf("\n=== 각 원소의 주소 ===\n");
	for(i=0; i<3; i++){
		printf("- %d행-\n", i);
		for(j=0; j<2; j++)
			printf("a[%d][%d]의 주소 : %d\n", i, j, *(a+i)+j);
	}
	
	printf("=== 각 원소의 내용물 출력 ===\n");
	for(i=0; i<3; i++){
		printf("- %d행 -\n", i);
		for(j=0; j<2; j++)
			printf("a[%d][%d]의 내용물 : %d\n", i, j, *(*(a+i)+j));
	}
	
}
