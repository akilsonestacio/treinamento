#include <stdio.h>

int main(){

    //Declaração de variáveis

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    //Entrada
    printf("Entre com o número 1: ");
    scanf("%d", &numero1);
    printf("Entre com o número 2: ");
    scanf("%d", &numero2);

    //Quatro Operações

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    //Imprimir

    printf("A soma é: %d  \n",soma);
    printf("A subtração é: %d \n",subtracao);
    printf("A multiplicação é: %d \n", multiplicacao);
    printf("A divisão é: %d \n", divisao);

    return 0;


}
