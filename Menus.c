#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    
    int opcao, numeroSecreto, palpite;

    printf(" Menu Principal \n");
    printf("Escolha (1) para iniciar o jogo \n");
    printf("Escolha (2) para ver regras \n");
    printf("Escolha (3) para sair \n");
    printf("Escolha a opção: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1:
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if(palpite == numeroSecreto){
            printf("Você acertou!! \n");
            printf("Número Secreto é %d", numeroSecreto);
        }else {printf("Você errou!! \n");
            printf("Número Secreto é %d", numeroSecreto);}
        break;
        case 2:
        printf("As regras são: \n");
        break;
        case 3:
        printf("Saindo do jogo \n");
        break;
        default:
        printf("Opção inválida \n");
        break;
    }
 return 0;









}