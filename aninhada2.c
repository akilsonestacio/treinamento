#include <stdio.h>
 int main (){

    int idade, dep;
    float renda;

    printf ("Digite sua idade:");
    scanf("%d", &idade);
    printf ("Digite sua renda:");
    scanf("%f", &renda);
    printf ("Digite o número de dependentes:");
    scanf("%d", &dep);

    if (idade >= 18 && idade<= 65)
    {if(renda < 3000)
    {if (dep > 2)
        {printf("Você atende a todos os critérios");}
    else{printf("Você não atende ao critério de dependente");}}
else
{printf("Você não atende o critério de renda");}}
    else{printf("Você não atende o critério de idade");}

return 0;

 }