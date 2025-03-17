#include <stdio.h>
 int main (){
  
    int opcao;
    float nota1, nota2, media;

    printf("***OPÇÕES DISPONÍVEIS*** \n");
    printf("(1) Calcular a média \n");
    printf("(2) Determinar status \n");
    printf("(3) Sair \n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    switch (opcao){
        
        case 1:
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        if(nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10)
        {
        media = (nota1+nota2)/2;
        printf("A média é: %.2f", media);}
        else{printf("Algum valor inválido");}
        break;
        case 2:
        printf("Entre com a média: ");
        scanf("%f", &media);
        media >= 6? printf ("Aprovado") : printf ("Reprovado");
        break;
        case 3:
        printf("**Sistema Finalizado**");
        break;
        default:
        printf("Opção inválida");
        break;
    }
    
  return 0;  
 }