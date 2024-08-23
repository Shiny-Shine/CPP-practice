//퀵 소 트(p159_quick)
#include<stdio.h>

int main(void){
	int i, data[10] = {5,3,2,1,8,0,7,9,6,4};
	void quick_sort();
	
	printf("정렬 전 : ");
	for(i=0; i<10; i++)	printf("%d ", data[i]); 
	quick_sort(data, 0, 9);
	printf("\n정렬 후 : ");
	for(i=0; i<10; i++)	printf("%d ", data[i]); 
}

void quick_sort(int *input, int i, int j){
	int pivot, left, right, temp;
	void swap();
	
	left=i;
	right=j;
	pivot=left;
	i++;
	if(left<right){
		while(i<=j){//피벗보다 작은 값은 왼쪽, 큰값은 오른쪽 
			while(*(input+i) <= *(input+pivot)&& i<j)	i++;
			while(*(input+j) > *(input+pivot) && i<=j)	j--;
			if(i<j)	swap(input+i, input+j);
			else break;
	 }
		swap(input+left, input+j);	//피벗 작은부분 마지막으로 이동
		quick_sort(input, left, j-1);	//작은 부분만 별도로 정렬 
		quick_sort(input, j+1, right);	//큰 
	}
}

void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
} 
