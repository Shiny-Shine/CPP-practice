//CodeUp - 1286 최대값, 최솟값

#include<stdio.h>

int main(void){
	int i, big=-1000000, min = 1000000;
	int arr[5];
	
	for(i=0; i<5; i++)	scanf("%d", &arr[i]);
	
	for(i=0; i<5; i++){
		if(arr[i] > big)	big = arr[i];
		if(arr[i] < min)	min = arr[i];
	}
	
	printf("%d\n%d\n", big, min);
	
	return 0;
}
