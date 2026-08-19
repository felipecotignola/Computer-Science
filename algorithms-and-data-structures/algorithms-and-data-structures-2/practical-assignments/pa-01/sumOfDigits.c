	#include<stdio.h>
	int recursao(int n){
		if(n<10){
			return n;
		}
		int soma=n%10;
		soma+=recursao(n/10);
		return soma;
	}
	int main(){
		int n;
		scanf("%d",&n);
		printf("%d",recursao(n));
	}
