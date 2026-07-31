        #include<stdio.h>
        int main(){
                float sM,kw,valor,valorDesconto;
                int qK;
                scanf("%f %d",&sM,&qK);
                kw=sM/700.0;
                printf("%.2f\n",kw);
                valor=qK*kw;
                printf("%.2f\n",valor);
                valorDesconto=valor*0.9;
                printf("%.2f",valorDesconto);

        }
