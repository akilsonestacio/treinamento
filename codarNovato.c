#include <stdio.h>

int main(){

    //Variáveis

    float temperatura, umidade;
    unsigned int estoque, estoqueMin = 1000;

    printf("Entre com a temperatura:");
    scanf("%f", &temperatura);
    printf("Entre com a a umidade:");
    scanf("%f", &umidade);
    printf("Entrecom estoque: ");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("A temperatura está alta!! \n");
    }else {
        printf("Temperatura está dentro dos parâmetros!! \n");    
        }
    
    

    if (umidade > 50){
        printf("Umidade elevada!! \n");
    }else {
        printf("Umidade está dentro do parâmetros!! \n");
        }
    

    if ( estoque < estoqueMin){
        printf("Estoque abaixo do mínimo!! \n");
    }else{
            printf("Estoque Normal!! \n");

        
        

    }
   
   return 0;

}