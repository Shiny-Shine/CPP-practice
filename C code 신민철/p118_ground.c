//가장 큰 운동장 (p118_ground)
#include <stdio.h>
 main() {
 	int i, w, h, max=0;
 	printf("운동장 3개의 가로 세로 길이를 차례로 입력하새요\n");
 	for(i=0; i<3; i++){
 		scanf("%d %d", &w, &h);
 		if(w*h>max)
 			max=w*h;
	 }
	 printf("가장 큰 운동장의 넓이는 %d 입니다.\n", max);
 }
