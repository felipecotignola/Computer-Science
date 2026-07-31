	#include<stdio.h>
	float procedimento(int n){
		float soma=0.0;
		for(int i=1;i<=n;i++){
			soma+=(float)(i*i+1)/(float)(i+3);
		}
		return soma;	
	}
	int main(){
		int n;
		scanf("%d",&n);
		float resp;
		resp=procedimento(n);
		printf("%.6f",resp);
	}
