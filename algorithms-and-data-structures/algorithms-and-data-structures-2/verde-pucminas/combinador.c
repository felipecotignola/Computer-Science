	#include<stdio.h>
	int tam(char* string){
		int tam=0;
		for(int i=0;string[i]!='\0';i++){
			tam++;
		}
		return tam;
	}
	void combinar(char* s1,char* s2,char* sFinal){
		int tam1=tam(s1),tam2=tam(s2),maiorTam;
		if(tam1>tam2){
			maiorTam=tam1;
		}	
		else{
			maiorTam=tam2;
		}
		int k=0;
		for(int i=0;i<maiorTam;i++){
			if(i<tam1){
				sFinal[k]=s1[i];
				k++;
			}
			if(i<tam2){
				sFinal[k]=s2[i];
				k++;
			}	
		}
		sFinal[k]='\0';
	}
	int main(){
		char s1[255],s2[255];
		while(scanf("%s %s",s1,s2)!=EOF){
			char sFinal[255];
			combinar(s1,s2,sFinal);
			printf("%s \n",sFinal);	
			
		}
	}
