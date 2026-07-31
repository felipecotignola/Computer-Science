	#include<stdio.h>
	int main(){
		char vet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char* p=vet;
		while(*p!='\0'){
			printf("%c ",*p);
			p++;
		}
	}
