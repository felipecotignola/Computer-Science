	#include<stdio.h>
	int strln(char string[]){
		int i=0,tam=0;
		while(string[i]!='\0'){
			tam++;
			i++;
		}
		return tam;
	}
	void readline(char string[],int tam){
		fgets(string,tam,stdin);
		string[strln(string)-1]='\0';
	}
	int main(){
		char string[255];
		readline(string,255);
		while(!(string[0]=='F'&&string[1]=='I'&&string[2]=='M')){
			readline(string,255);
		}
	}
