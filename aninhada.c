#include <stdio.h>

int main (){

    int idade;
    float renda;

    printf ("Digite sua idade:");
    scanf("%d", &idade);
    printf("Digite sua renda:");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60)
    {if (renda < 2000){
      printf("Você tem direito ao desconto");  
    } else{ printf ("Você não tem  a renda");}
    } else {printf("Você não tem idade");}
        
        
        
        
        
        
    








}