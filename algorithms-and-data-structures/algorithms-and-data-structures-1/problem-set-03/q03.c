	#include<stdio.h>
	void procedimento(int a,int b,int c){
		if(a<b && a<c){
			if(b<c){
				printf("%d %d %d\n",a,b,c);
			}
			else{
				printf("%d %d %d\n",a,c,b);
			}
		 }
		else if(b<a && b<c){
			if(a<c){
				printf("%d %d %d\n",b,a,c);
			}
			else{
				printf("%d %d %d\n",b,c,a);
			}
		}
		else if(c<a && c<b){
			if(a<b){
				printf("%d %d %d\n",c,a,b);
			}
			else{
				printf("%d %d %d\n",c,b,a);
			}
		}
			

	}
	int main(){
		int n,a,b,c;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d %d %d",&a,&b,&c);
			procedimento(a,b,c);	
		}	
	}
