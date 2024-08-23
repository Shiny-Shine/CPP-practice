//포인터(p135_pointer2)
#include<stdio.h>
main(){
	int i, a[5]={11, 22, 33, 44, 55};
	
	
	printf("=== 주소(address) 출력 ===\n");
	for(i=0; i<5; i++){
		printf("a[%d]의 주소 : %d\n", i, &a[i]);
		printf("a+%d의 값 : %d\n\n", i, a+i);
	}
	
	
	printf("=== 내용물 출력 ===\n");
	for(i=0; i<5; i++){
		printf("a[%d]의 내용물 : %d\n", i, a[i]);
		pritnf("a+%d의 내용물 : %d\n\n", i, *(a+i));
	}
}
