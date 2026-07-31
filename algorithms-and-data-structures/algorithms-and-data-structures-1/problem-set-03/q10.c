	#include<stdio.h>
	char procedimento(int n){
		if(n>=5 && n<=7){
			return 'F';
		}
		else if(n<=10){
			return 'E';
		}
		else if(n<=13){
			return 'D';
		}
		else if(n<=15){
			return 'C';
		}
		else if(n<=17){
			return 'B';
		}
		else if(n>=18){
			return 'A';
		}	
	}
	int main(){
		int idade;
		scanf("%d",&idade);
		printf(" %c\n",procedimento(idade));
	}
