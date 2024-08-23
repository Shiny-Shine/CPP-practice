//자료 입출력(p71_score) 
#include <stdio.h>
main() {
	int kor, eng, mat, sum;
	float avg;
	
	printf("국어, 영어, 수학 성적을 입력하세요");
	scanf("%d", &kor);
	scanf("%d", &eng);
	scanf("%d", &mat);
	
	sum=kor+eng+mat;
	
	avg=sum/3.0;
	
	printf("세 자료의 총점은 %d 이고 평균은 %.2f 입니다", sum, avg);
} 
