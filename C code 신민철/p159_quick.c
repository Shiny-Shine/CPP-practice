//�� �� Ʈ(p159_quick)
#include<stdio.h>

int main(void){
	int i, data[10] = {5,3,2,1,8,0,7,9,6,4};
	void quick_sort();
	
	printf("���� �� : ");
	for(i=0; i<10; i++)	printf("%d ", data[i]); 
	quick_sort(data, 0, 9);
	printf("\n���� �� : ");
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
		while(i<=j){//�ǹ����� ���� ���� ����, ū���� ������ 
			while(*(input+i) <= *(input+pivot)&& i<j)	i++;
			while(*(input+j) > *(input+pivot) && i<=j)	j--;
			if(i<j)	swap(input+i, input+j);
			else break;
	 }
		swap(input+left, input+j);	//�ǹ� �����κ� ���������� �̵�
		quick_sort(input, left, j-1);	//���� �κи� ������ ���� 
		quick_sort(input, j+1, right);	//ū 
	}
}

void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
} 
