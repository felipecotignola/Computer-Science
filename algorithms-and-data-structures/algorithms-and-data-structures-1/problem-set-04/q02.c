	#include<stdio.h>
	int recursao(int n){
		if(n==1||n==2){
			return 1;
		}
		int fibonacci=recursao(n-1)+recursao(n-2);
		return fibonacci;
		
	}
	int main(){
		int n;
		scanf("%d",&n);
		printf("%d",recursao(n));
	}
