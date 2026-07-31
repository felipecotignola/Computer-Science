        #include <stdio.h>
        int main(){
                int diaria;
                scanf("%d",&diaria);
                float diariaPromocional=(float)diaria *0.75;
                float total80=(80*0.8)*diariaPromocional;
                float total50=(80*0.5)*diaria;
                float dif=total80-total50;
                printf("Valor promocional: %.2f\n",diariaPromocional);
                printf("Promocional com 80%% ocupado: %.2f\n",total80);
                printf("Normal com 50%% ocupado: %.2f\n",total50);
                printf("Diferenca entre os valores: %.2f\n",dif);
        }
