//�迭�� Ȱ��-2(p132_init)
#include<stdio.h>
main(){
	int A[3][2] = { {100, 100}, {90, 86}, {89, 98}};
	int i, j;
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
}
