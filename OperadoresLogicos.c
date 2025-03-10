#include <stdio.h>
    int main (){



        int a = -7, b=-1, c=1, d = 10, e = 10;

        if (a>0 || b>0){
            printf("Os dois número são positivos \n");
        }else{
            printf("Os dois são negativos \n");

        }
        if (!c) {
            printf("O número é 0 \n");
        }else{
            printf("O número é diferente de 0 \n");
        }
        
        
        if (!(e>0)) {
            printf("a variável é negativa \n");
        }else{
            printf("A variável é positiva \n");
        }
      return 0; 
    }