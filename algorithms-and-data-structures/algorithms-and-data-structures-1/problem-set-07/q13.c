	#include<stdio.h>
	int main(){
		char string[255];
		fgets(string,255,stdin);
		int tam=0;
		for(int i=0;*(string+i)!='\0';i++){ 
			tam++;
			if(*(string+i)=='\n'){
				 *(string+i)='\0';
			}
		}
		tam--;
		for(int i=tam-1;i>=0;i--){
			printf("%c ",*(string+i));
		}	
			
	}
