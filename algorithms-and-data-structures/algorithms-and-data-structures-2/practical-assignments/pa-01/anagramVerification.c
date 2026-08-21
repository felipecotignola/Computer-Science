	#include<stdio.h>
	int tamanho(char* str){
		int cont=0;
		while(*str!='\0'){
			cont++;	
			str++;	
		}
		return cont;
	}
	int verify(char* str1,char* str2){
		int size1=tamanho(str1),size2=tamanho(str2);
		if(size1==size2){	
			int vet1[26],vet2[26];
			for(int i=0;i<26;i++){
				vet1[i]=0;
				vet2[i]=0;
			}	
			for(int i=0;i<size1;i++){
				if(str1[i]>='A' && str1[i]<='Z'){
					vet1[str1[i]-'A']++;	
				}
				else if(str1[i]>='a' && str1[i]<='z'){
					vet1[str1[i]-'a']++;
				}
				if(str2[i]>='A' && str2[i]<='Z'){
					vet2[str2[i]-'A']++;
				}
				else if(str2[i]>='a' && str2[i]<='z'){
					vet2[str2[i]-'a']++;	
				}
			}
			for(int i=0;i<26;i++){
				if(vet1[i]!=vet2[i]){
					return 0;
				}
			}
			return 1;
		}
		else{
			return 0;	
		}	
	}	
	void readline(char* str,int tam){
		fgets(str,tam,stdin);
		str[tamanho(str)-1]='\0';
	}
	int main(){
		char s1[256],s2[256];
		readline(s1,256),readline(s2,256);
		if(verify(s1,s2)){
			printf("SIM\n");
		}	
		else{
			printf("NAO\n");
		}
	}
