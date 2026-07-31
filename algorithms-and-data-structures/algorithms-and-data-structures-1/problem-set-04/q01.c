	#include<stdio.h>
	int recursao(int n){
		if(n==1){
			return n;	
		}
		int fat=n*recursao(n-1);
		return fat;
	}	
	int main(){
		int n;
		scanf("%d",&n);
		printf("%d",recursao(n));
	}
