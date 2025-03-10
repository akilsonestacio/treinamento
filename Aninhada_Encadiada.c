#include <stdio.h>
    int main (){

        int numero;

        printf("Digite o número:");
        scanf("%d", &numero);

        if(numero > 0){
            if( numero % 2 == 0) { printf ("Numero par positivo");}
            else {printf("Número impar positivo");}
        }else {if (numero == 0){
            printf ("Número Zero");
        } else {printf("esse número é negatico");}}
        return 0;
    }