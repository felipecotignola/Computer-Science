	#include<stdio.h>
	int main(){
		int n,c,d,u,novoN;
		scanf("%d",&n);
		if(n>=100 && n<1000){
			u=n/100;
			d=(n/10)%10;
			c=n%10;
			novoN=(c*100)+(d*10)+u;
			printf("%d",novoN);
		}
	}
