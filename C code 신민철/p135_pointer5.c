//���ڿ��� �������� ����(p135_pointer5)
#include<stdio.h>
main(){
	int i, j;
	char sa[5][10]={"usb","mouse", "printer", "computer", "percessor"};
	char *sp[5]={"usb", "mouse", "printer", "computer", "processor"};
	
	//���ڿ� ��ü�� ������ ����� ������ ������
	
	
	printf("=== �Ϲ� �迭 ===\n");
	for(i=0; i<5; i++){
		printf("%s => ", sa[i]);
		for(j=0; j < strlen(sa[i]); j++){
			printf("%c", sa[i][j]);
			if(j+1 < strlen(sa[i]))
				printf(",");
			printf(" ");
		}
		putchar('\n');
	}
		// %s�� ��� ����� ������
		
	printf("\n===== ������ �迭 =====\n");
	for(i=0; i<5; i++){
		printf("%s => ", sp[i]);
		for(j=0; j < strlen(sp[i]); j++){
			printf("%c", *(*(sp+i)+j));
			if(j+1 < strlen(sp[i]))
				printf(",");
				printf(" ");
			}
		putchar('\n');
	}
}
