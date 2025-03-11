#include <stdio.h>

int main (){

    char variavel;

    printf("Digite um valor:");
    scanf("%c", &variavel);

    switch (variavel) {
        case 'a':
            printf("Código a ser executado se variável == 1 \n");
            printf("Teste case 1 \n");
            break;
        case 'b':
           printf("Código a ser executado se valor == 2 \n");
           break;
        default:
            printf("Variável não é 1 nem 2 \n");
    }




}