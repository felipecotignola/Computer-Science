	#include<stdio.h>
	int main(){
		int n;
		scanf("%d",&n);
		int tras=0,frente=1,soma;
		while(tras<n){
			printf("%d ",tras);
			soma=tras+frente;
			tras=frente;
			frente=soma;
		}
	}
