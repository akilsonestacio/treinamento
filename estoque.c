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

    int resultadoA, resultadoB;
    
    printf("Produto: %s, tem estoque: %u e valor unitário: %.2f \n", produtoA, estoqueA, valorA);
    printf("Produto: %s, tem estoque: %u e valor unitário: %2.f \n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueMinA;
    resultadoB = estoqueB > estoqueMinB;
    
    printf("O %s tem estoque mínimo %d \n", produtoA, resultadoA);
    printf("O %s, tem estoque mínimo %d \n", produtoB, resultadoB);
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d \n", estoqueA*valorA, estoqueB*valorB, (estoqueA*valorA) > (estoqueB*valorB));



}