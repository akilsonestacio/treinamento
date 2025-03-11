#include <stdio.h>

int main (){

    int opcao;
    float saldo = 1000;

    printf("Escolha a opção: \n");
    printf("1 - Verificar Saldo \n");
    printf("2 -  Verificar de depósito \n");
    printf("3 - Fazer saque \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
        printf("Seu saldo é: R$ %f \n", saldo);
        break;
        case 2:
        printf("Digite o banco de depósito: \n");
        printf("Digite a agência de depósito: \n");
        printf("Digite a conta de depósito: \n");
        break;
        case 3:
        printf("Digite o valor a sacar: \n");
        break;
        default:
        printf("Opção inválida!");
        break;

        return 0;

    }














}