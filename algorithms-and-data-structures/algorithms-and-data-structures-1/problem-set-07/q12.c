	#include<stdio.h>
	#include<ctype.h>
	int main(){
		char string[255];
		fgets(string,255,stdin);
		int vogais=0,consoantes=0;
		for(int i=0;*(string+i)!='\0';i++){
			char c=tolower(*(string+i));
			if(c>='a' && c<='z'){
				if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
					vogais++;
				}
				else{
					consoantes++;
				}
			}	
		}
		printf("%d %d",vogais,consoantes);
	}
