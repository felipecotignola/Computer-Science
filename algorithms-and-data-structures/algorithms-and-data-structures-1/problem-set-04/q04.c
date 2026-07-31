	#include<stdio.h>
	int recursao(int base,int expoente,){
		if(expoente==0){
			return 1;
		}
		int elevar=base*recursao(base,expoente-1);
		return elevar;	
	}
	int main(){
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d",recursao(a,b));
	}
