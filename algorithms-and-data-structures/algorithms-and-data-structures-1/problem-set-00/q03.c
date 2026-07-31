   #include<stdio.h>
        #include<math.h>
        int main(){
                float base,altura,perimetro,area,diagonal;
                scanf("%f %f",&base,&altura);
                perimetro=2*(base+altura);
                area=base*altura;
                diagonal=sqrt(pow(base,2)+pow(altura,2));
                printf("%.2f %.2f %.2f",perimetro,area,diagonal);

        }
