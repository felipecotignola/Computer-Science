	#include<stdio.h>
	struct Pessoa{
		int idade;
		char nome[50];
	}typedef Pessoa;
	void swap(Pessoa* vet,int i,int j){
		Pessoa temp=vet[i];
		vet[i]=vet[j];
		vet[j]=temp;
	}
	int main(){
		Pessoa array[100];
		int n,idade;
		char nome[50];
		while(scanf("%d",&n)!=EOF){
			for(int i=0;i<n;i++){
				scanf("%s",array[i].nome);
				scanf("%d",&array[i].idade);
			}
			for(int i=0;i<n-1;i++){
				int menor=i;
				for(int j=i+1;j<n;j++){
					if(array[j].idade<array[menor].idade){
						menor=j;
					}
				}
				swap(array,i,menor);
			}
			for(int i=0;i<n;i++){
				if(i!=n-1){
					printf("%s, ",array[i].nome);
				}
				else{
					printf("%s",array[i].nome);
				}
			}
			printf("\n");
		}
	}
