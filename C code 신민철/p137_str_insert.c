//���ڿ� ����(p137_str_insert) 
#include<stdio.h>
main(){
	int i, j, pos, a, b, c;
	char st1[50], st2[20], st3[70];
	
	printf("*** ���ڿ� ���� ***\n");
		printf("�⺻ ���ڿ� => ");
		gets(st1);
		printf("������ ���ڿ� => ");
		gets(st2);
		printf("������ ��ġ => ");
		scanf("%d", &pos);
		
		j=strlen(st2);
		
		for(i=0; i<pos; i++){ 	
			if(st1[i] == '\0')	break;
			st3[i] = st1[i];
		}							
		b = i;
		
		for(a=0; a<j; a++){
			if(st2[a] == '\0')	break;
			st3[i] = st2[a];
			i++;
		}
		
		for(c=0; c<=b; c++){
			st3[i] = st1[b];
			b++;
			i++;
		}
		printf("%s", st3);
	}
