//���ڿ� �˻�(p137_str_research2)
#include<stdio.h>
#include<string.h>
main(){
	int i, j, n1, n2, pos, flag=0, sum=0;	//n1, n2�� �� ���ڿ��� ����
	char st1[20], st2[10];	//�⺻ ���ڿ��� �˻��� ���ڿ�
	
	printf("*** ���ڿ� �˻� ***\n\n");
	printf("�⺻ ���ڿ� => ");
	gets(st1);
	printf("�˻��� ���ڿ� => ");
	gets(st2);
	
	n1=strlen(st1);
	n2=strlen(st2);
	
	for(i=0; i<n1-n2+1; i++){
		pos=i;
		for(j=0; j<n2; j++)
			if(st1[pos] != st2[j])	break;
			else pos++;
		if(j==n2) {
			sum++;
			flag=1;
		}
	}
	if(flag==0)	printf("\n�⺻ ���ڿ��� \"%s\"(��)�� ���Ե��� �ʾҽ��ϴ�.\n", st2);
	if(flag==1)	printf("\n�⺻ ���ڿ��� \"%s\"(��)�� %d �� ���ԵǾ����ϴ�.\n", st2, sum);
}
