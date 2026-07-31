	#include<stdio.h>
	int main(){
		int voto,c1=0,c2=0,c3=0,c4=0,nulo=0,branco=0;
		scanf("%d",&voto);
		while(voto!=0){
			if(voto==1){
				c1++;
			}
			else if(voto==2){
				c2++;
			}
			else if(voto==3){
				c3++;
			}
			else if(voto==4){
				c4++;
			}
			else if(voto==5){
				nulo++;
			}
			else if(voto==6){
				branco++;
			}
			scanf("%d",&voto);
		}
		printf("%d\n",c1);
		printf("%d\n",c2);
		printf("%d\n",c4);
		printf("%d\n",nulo);
		printf("%d\n",branco);	
	}
