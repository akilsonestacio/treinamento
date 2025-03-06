#include <stdio.h>
int main(){
    int numero = 4, resultado;

    resultado = numero % 2;
    printf("O resto é: %d \n", resultado);
   
    if (resultado == 0){
        printf("Este  número é par \n");
        printf("Dentro do IF \n");

    }
    printf("Fora do IF");






}