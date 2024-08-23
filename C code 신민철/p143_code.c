//C언어를 찾아라(p143_code)
main(){
	char S[101];
	int i, c=0, cc=0;
	printf("100자 이내의 문자열을 입력하세요: ");
	scanf("%s", S);
	for(i=0; i<101; i++){
		if(S[i]=='c' || S[i]=='C'){
			c++;
		
		if(S[i+1]=='c' || S[i+1]=='C')	cc++;
	}
	}
	printf("C의 개수는 : %d\n", c);
	printf("CC의 개수는 : %d\n", cc);
}
