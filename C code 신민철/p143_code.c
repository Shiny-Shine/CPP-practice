//C�� ã�ƶ�(p143_code)
main(){
	char S[101];
	int i, c=0, cc=0;
	printf("100�� �̳��� ���ڿ��� �Է��ϼ���: ");
	scanf("%s", S);
	for(i=0; i<101; i++){
		if(S[i]=='c' || S[i]=='C'){
			c++;
		
		if(S[i+1]=='c' || S[i+1]=='C')	cc++;
	}
	}
	printf("C�� ������ : %d\n", c);
	printf("CC�� ������ : %d\n", cc);
}
