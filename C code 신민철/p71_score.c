//�ڷ� �����(p71_score) 
#include <stdio.h>
main() {
	int kor, eng, mat, sum;
	float avg;
	
	printf("����, ����, ���� ������ �Է��ϼ���");
	scanf("%d", &kor);
	scanf("%d", &eng);
	scanf("%d", &mat);
	
	sum=kor+eng+mat;
	
	avg=sum/3.0;
	
	printf("�� �ڷ��� ������ %d �̰� ����� %.2f �Դϴ�", sum, avg);
} 
