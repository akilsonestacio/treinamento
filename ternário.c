#include <stdio.h>
    int main (){

        int idade = 20;
        int temperatura = 40;
        int resultado, num1 = 40, num2 = 60, maior;

        //idade >= 18? printf("Você é maior de idade") : printf("Você é menor de idade");
        
       /*resultado = idade >= 18? 1 : 0;

       if (resultado == 1) {
        printf("Você é maior de idade");}
        else {printf("Você é menor de idade");}*/
        
       /*resultado = temperatura > 30? 1 : 0;

        if (resultado == 1) {
            printf("Está calor");}
            else {printf("Está frio");}*/


        num1 > num2? (maior = num1) : (maior = num2);
        printf("o maior é: %d", maior);


        return 0;
    }