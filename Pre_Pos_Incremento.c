#include <stdio.h>

int main(){

int numero1=1, resultado;

printf("Antes do Incremento: %d \n", numero1);

resultado = numero1++;

printf("Após o Pos-Incremento número1: %d - resultado: %d \n", numero1, resultado);

resultado =++numero1;

printf("Após o pré-incremento numero1: %d - resultado: %d \n", numero1, resultado);

resultado = numero1--;

printf ("Após o Pós-Decremento numero1: %d - Resulatdo: %d \n", numero1, resultado);


resultado = --numero1;

printf ("Após o Pré-Decremento numero1: %d - Resulatdo: %d \n", numero1, resultado);


return 0;

}