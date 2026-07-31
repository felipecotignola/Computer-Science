	#include<stdio.h>
	long long int recursao(long long int n){
		if(n<10){
			return 1;
		}
		long long int soma=1+recursao(n/10);
		return soma;
	}
	int main(){
		long long int n;
		scanf("%lld",&n);
		printf("%lld",recursao(n));
	}
