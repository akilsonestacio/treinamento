#include <stdio.h>

    int main(){
    
    // Declaração
    
    int numero1 = 1, resultado;

    //Inicio
   printf("Antes Incremento: %d \n", numero1);
    resultado = numero1++;
    
    //numero1++;
   printf("Após o pos Incremento numero1 : %d - resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    
    printf("Após pre Incremento numero1 : %d - resultado: %d\n", numero1, resultado);

    //numero1--;
    //printf("Após Incremento: %d \n", numero1);

    return 0;
}