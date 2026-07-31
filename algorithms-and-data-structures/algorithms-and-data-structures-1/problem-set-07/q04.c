	#include<stdio.h>
	#include<stdlib.h>
	int main(){
		int n;
		scanf("%d",&n);
		int* vet=malloc(n *sizeof(int));
		for(int i=0;i<n;i++){
			scanf("%d",&vet[i]);	
		}
		int maior=vet[0];
		for(int i=1;i<n;i++){
			if(vet[i]>maior){
				maior=vet[i];
			}
		}
		printf("%d",maior);
		free(vet);		
	}
