//���� ū ��� (p118_ground)
#include <stdio.h>
 main() {
 	int i, w, h, max=0;
 	printf("��� 3���� ���� ���� ���̸� ���ʷ� �Է��ϻ���\n");
 	for(i=0; i<3; i++){
 		scanf("%d %d", &w, &h);
 		if(w*h>max)
 			max=w*h;
	 }
	 printf("���� ū ����� ���̴� %d �Դϴ�.\n", max);
 }
