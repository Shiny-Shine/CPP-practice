//1��� �õ� (p120_top_bottom)
#include<stdio.h>
main(){
	int n, i, num;
	int max=0, min=100;
	printf("�л� ���� �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("������ �Է��ϼ��� (0~100) : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &num);
		if(num>max)
			max=num;
		if(num<min)
			min=num;
	 } 
	 printf("1���� %d ��, ����� %d �� \n", max, min);
} 
