	#include<stdio.h>
	int main(){
		int n;
		scanf("%d",&n);
		int tras=0,frente=1,soma;
		for(int i=0;i<n;i++){
			printf("%d ",tras);
			soma=tras+frente;
			tras=frente;
			frente=soma;
		}
	}
