# include<stdio.h>

int main(){
    
    //Declaração de Variaveis
    char produtoA [30] = "Produto A";
    char produtoB [30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinA = 500;
    unsigned int estoqueMinB = 2500;
    
    double valorTotalA;
    double valorTotalB;
    
    printf("Produto: %s, tem estoque: %u e valor unitário: %.2f \n", produtoA, estoqueA, valorA);
    printf("Produto: %s, tem estoque: %u e valor unitário: %2.f \n", produtoB, estoqueB, valorB);

  



}