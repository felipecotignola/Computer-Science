	#include<stdio.h>
	typedef struct{
		int x,y;
	}Ponto;
	int main(){
		Ponto a,b,c;
		int n,x,y;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d %d",&a.y,&a.x);
			scanf("%d %d",&b.y,&b.x);
			scanf("%d %d",&c.y,&c.x);
			int aV=0,aH=0;
			if(a.y==b.y)aV++;
			if(a.y==c.y)aV++;
			if(b.y==c.y)aV++;
			if(a.x==b.x)aH++;
			if(a.x==c.x)aH++;
			if(b.x==c.x)aH++;
			printf("CONJUNTO %d:\n",i);
			if(aV==0){
				printf("Nao ha alinhamentos verticais\n");
			}
			else{
				printf("Alinhamentos verticais: %d\n",aV);
			}
			if(aH==0){
				printf("Nao ha alinhamentos horizontais\n");
			}
			else{
				printf("Alinhamentos horizontais: %d\n",aH);
			}
		
		
		}
	}
