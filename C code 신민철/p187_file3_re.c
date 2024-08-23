//excel(공백으로 구분된)파일 읽기(p187_file3_re.c)
#include<stdio.h>
#include<stdlib.h>
#define NO 10

int main(void)
{
	struct rec{
		int no, mat, kor, eng;
		char name[10];
		int arr[NO];
	};
	
	struct rec data[NO];
	FILE *fp;
	int i;
	
	srand(time(NULL));
	
	for(i=0; i<NO; i++){
		data[i].no = 1100+i+1;
		gets(data[i].name);
		data[i].mat = 40+rand()%61;
		data[i].kor = 40+rand()%61;
		data[i].eng = 40+rand()%61;
	}
	
	fp = fopen("student2.dat", "w");
	
	for(i=0; i<NO; i++)
		fprintf(fp, "%4d %s %3d %3d %3d\n", data[i].no, data[i].name, data[i].mat, data[i].kor, data[i].eng);
	close(fp);
	
	for(i=0; i<NO; i++)
		printf("%4d %s %3d %3d %3d\n", data[i].no, data[i].name, data[i].mat, data[i].kor, data[i].eng);
	
	return 0;
	
}
