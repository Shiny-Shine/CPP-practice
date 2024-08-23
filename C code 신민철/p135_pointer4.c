//문자열과 포인터의 관계(p135_pointer4)
#include<stdio.h>
main(){
	int i, j;
	char sa[5][10]={"usb","mouse", "printer", "computer", "percessor"};
	char *sp[5]={"usb", "mouse", "printer", "computer", "processor"};
	
	//문자열 자체는 가신이 저장된 공간의 포인터
	
	printf("=== 일반 배열 ===\n");
	for(i=0; i<5; i++)
		printf("sa[%d] : %d, %s\n", i, sa[i], sa[i]);
		// %s는 출력 대상이 포인터
		
	printf("\n===== 포인터 배열 =====\n");
	for(i=0; i<5; i++)
		printf("sp+%d : %d, %s\n", i, sp[i], sp[i]);
}
