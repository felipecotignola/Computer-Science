	#include<stdio.h>
	int recursao(int n){
		if(n==1){
			return 1;
		}
		int soma=n+recursao(n-1);
		return soma;
	}
	int main(){
		int n;
		scanf("%d",&n);
		printf("%d",recursao(n));	
	}
