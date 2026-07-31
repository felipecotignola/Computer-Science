	#include<stdio.h>
	void procedimento (int a,int b,int c,char letra){
		if(letra=='A'){
			float mediaA=(float)(a+b+c)/3.0;
			printf("%.2f\n",mediaA);
		}
		if(letra=='P'){
			float mediaP=(float)(a*5+b*3+c*2)/10.0;
			printf("%.2f\n",mediaP);
		}
	}
	int main(){
		int n,a,b,c;
		scanf("%d",&n);
		char letra;
		for(int i=0;i<n;i++){
			scanf("%d %d %d",&a,&b,&c);
			scanf(" %c",&letra);
			procedimento(a,b,c,letra);	
		}	
	}
