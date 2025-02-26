#include<stdio.h>

int main(){

    //Variáveis

    float n1, n2, n3, media;

    // Logica

    printf("Digite a nota da 1ª avaliação: ");
    scanf("%f", &n1);
    printf("Digite a nora da 2ª avaliação: ");
    scanf("%f", &n2);
    printf("Digite a nota da 3ª avaliação: ");
    scanf("%f", &n3);
    media = (n1+n2+n3)/3;
    
    //Impressão
    
    printf("O valor da média é: %f", media);


    return 0;
    
}