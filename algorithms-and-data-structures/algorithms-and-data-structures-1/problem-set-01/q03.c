        #include <stdio.h>
        int main(){
                int anoNasc;
                scanf("%d",&anoNasc);
                int idade=2026-anoNasc;
                char aniversario;
                scanf(" %c",&aniversario);
                printf("%d\n",idade);
                        if(idade>=18){
                                printf("Pode dirigir");
                        }
                        else{
                                printf("Nao pode dirigir");
                        }
        }
