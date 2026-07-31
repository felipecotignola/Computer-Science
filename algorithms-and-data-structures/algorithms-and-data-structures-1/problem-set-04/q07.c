	#include<stdio.h>
	int recursao(int n){
		if(n<10){
			return n;
		}
		int soma=n%10+recursao(n/10);
	}
	int main(){
		int n;
		scanf("%d",&n);
		printf("%d",recursao(n));
	}
