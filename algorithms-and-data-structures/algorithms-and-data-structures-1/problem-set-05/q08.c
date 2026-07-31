	#include<stdio.h>
	int divisores(int n,int* max,int* min){
		int div=1;
		for(int i=2;i<=n;i++){
			if(n%i==0){
				div++;	
			}	
		}	
		if(div==2){
			return 0;
		}
		else{
			int divmax=2,divmin=n-1;
			for(int i=2;i<n;i++){
				if(n%i==0 && i>divmax){
					divmax=i;
				}
				else if(n%i==0 && i<divmin){
					divmin=i;
				}
			}
			*max=divmax;
			*min=divmin;
			return 1;
		}
	}
	int main(){
		int n,max,min;
		divisores(n,&max,&min);	
	}
