//범인을 잡아라! (p145_code)
main(){
	int n, sum=0;
	printf("용의자의 DNA 를 입력하세요: ");
	scanf("%d", &n);
	while(n!=0){
		sum+=n%10;				//DNA 마지막자리를 떼서 더함 
//		printf("sum의 값 : %d\n", sum);
		n=n/10;				//다음 자리수 숫자를 더하기위해 10으로 나눠줌 
		//printf("n의 값 : %d", n);
	}
	if(sum%7 == 4)	printf("범인\n");		//이제 나눈 나머지가 4이면 범인~ 
	else	printf("일반인\n"); 
} 
