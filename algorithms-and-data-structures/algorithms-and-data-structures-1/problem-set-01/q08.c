        #include <stdio.h>
        int main(){
                int salario;
                float novoSalario;
                scanf("%d",&salario);
                char opcao;
                scanf(" %c",&opcao);
                switch(opcao){
                        case 'A':
                                novoSalario=(float)salario*1.08;
                                break;
                        case 'B':
                                novoSalario=(float)salario*1.11;
                                break;
                        case 'C':
                                if(salario<=1000){
                                        novoSalario=(float)salario+350.00;
                                }
                                else{
                                        novoSalario=(float)salario+200.00;
                                }
                }
                        printf("%.2f",novoSalario);
        }
