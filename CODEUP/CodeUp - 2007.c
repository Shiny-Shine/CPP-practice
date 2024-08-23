//CodeUp - 2007 오름차순? 내림차순?
#include<stdio.h>

int main(void){
	int n, i, flag = 0, nflag = 0;
	int arr[101];
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	for(i=0; i<n-1; i++)
		if(arr[i] < arr[i+1])	flag ++;
		else if(arr[i] > arr[i+1])	nflag++;
	
	if(flag == n-1)	printf("오름차순\n");
	else if(nflag == n-1)	printf("내림차순\n");
	else printf("섞임\n");
	
	return 0;
}
