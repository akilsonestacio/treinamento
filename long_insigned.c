#include <stdio.h>
int main(){
    short int numeroPequeno = 32767;
    printf("Numero pequeno (short int): %d \n", numeroPequeno);

   numeroPequeno = 32768;

    printf("atualizado: %d", numeroPequeno);

    return 0;
}