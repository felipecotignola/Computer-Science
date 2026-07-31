	#include<stdio.h>
	int fat(int n){
		if(n==1){
			return n;
		}
		int fatorial=n*fat(n-1);
		return fatorial;
	}
	double serie(int n){
		if(n==1){
			return n;
		}
		double s=(double)1/((double)fat(n))+serie(n-1);
		return s;
	}
	int main(){
		int n;
		scanf("%d",&n);
		if(n>0){
			printf("%.2f",serie(n));
		}
	}
