#include<stdio.h>
#include<stdbool.h>
#define NO 9
int main(void){
	int i, j, a, b;
	int arr[NO]={1, 9, 5, 4, 3, 8, 7, 2, 6};
	
	for(i=0; i<NO; i++)	printf("%d", arr[i]);
	putchar('\n');
	bubble(arr, 9);
	
	for(i=0; i<NO; i++)	printf("%d ", arr[i]);
	
	printf("ã�� ���ڸ� �Է��ϼ��� : ", a);
	scanf("%d", a);
	
	if(BinarySearch(arr, NO, a) == )	printf("\nã�� �ڷ�� �������� �ʽ��ϴ�.");
	else printf("\n%d �� �迭�� %d �ڸ��� �ֽ��ϴ�.", a, m); 
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubble(int *arr, int length){
	int i, j;
	
	for(i=length-1; i>0; i--){
		for(j=0; j<i; j++){
			if(arr[j] > arr[i]){
				swap(&arr[i], &arr[j]);
			}
		}
	}
}

int BinarySearch(int *arr, int size, int target){
	int first = 0;
	int last = size-1;
	int mid;
	
	while(first <= last){		//first < last �ϋ�������!!!!!!
	 	mid = (first + last) /2;		//�̵带 ��� ����!!
		if(target == arr[mid])	return mid;
		
		else if(target > arr[mid])	first = mid+1;
		
		else last = mid-1;
		
	}
	return -1;
}
