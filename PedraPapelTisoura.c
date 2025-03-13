#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main (){

     int escolhaJogador, escolhaComputador;
     
     srand (time(0));

     printf("*******Jogo de Jokenpô******** \n");
     printf("Opções: \n");
     printf("(1) para pedra \n");
     printf("(2) para papel \n");
     printf("(3) para tesoura \n");
     printf("Escolha a opção:");
     scanf("%d", &escolhaJogador);
     escolhaComputador = rand() % 3 + 1;
     
     switch (escolhaJogador)
     {
     case 1:
        printf("Você escolheu Pedra: %d \n", escolhaJogador);
     break;
     case 2:
        printf("Você escolheu Papel: %d \n", escolhaJogador);
     break;
     case 3:
        printf("Você escolheu Tesoura: %d \n", escolhaJogador);
     break;
     default:
     printf("Opção inválida: %d \n", escolhaJogador);   
     break;
     }

     switch (escolhaComputador)
     {
     case 1:
        printf("O computador escolheu Pedra: %d \n", escolhaComputador);
     break;
     case 2:
        printf("O computador escolheu Papel: %d \n", escolhaComputador);
     break;
     case 3:
        printf("O computador escolheu Tesoura: %d \n", escolhaComputador);
     break;
     }

     if(escolhaJogador != escolhaComputador) {
        if(escolhaJogador == 1 && escolhaComputador == 2){
            printf("Computador venceu!");
        }else{ if(escolhaJogador == 1 && escolhaComputador == 3){
            printf("Você venceu!");
        }else{if(escolhaJogador == 2 && escolhaComputador == 1){
            printf("Você venceu!!");
        }else{
            if(escolhaJogador == 2 && escolhaComputador == 3){
                printf("O computador venceu!!");
            }else{if(escolhaJogador == 3 && escolhaComputador == 1){
                printf("Computador Vendeu!");
            }else{ if(escolhaJogador == 3 && escolhaComputador == 2){
                printf("Você venceu!");
            }else{printf("Erro na escolha do jogador!!");}
        }}}}}
     } else{printf ("Jogo empatado!!");}


 }