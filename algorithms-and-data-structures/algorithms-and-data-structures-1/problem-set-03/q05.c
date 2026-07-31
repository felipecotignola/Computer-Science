	#include<stdio.h>
	void procedimento(int media){
		if(media<40){
			printf("F\n");
		}
		else if(media<60){
			printf("E\n");
		}
		else if(media<70){
			printf("D\n");
		}
		else if(media<80){
			printf("C\n");
		}
		else if(media<90){
			printf("B\n");
		}
		else{
			printf("A\n");
		}
	}
	int main(){
		int n,nota;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&nota);
			procedimento(nota);
		}
		
	}
