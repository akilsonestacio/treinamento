#include <stdio.h>

int main () {

    int dia;

    printf("Entre com o dia da semana:");
    scanf("%d", &dia);

    //if (dia ==1){
      //  printf("Domingo");}
     //else {if(dia == 2){
       // printf("Segunda");}
        //else {if(dia == 3){
          //  printf("Terça");}
            //else {if ( dia == 4){
              //  printf("Quarta");}
                //else {if( dia == 5){
                  //  printf("Quinta");}
                    //else {if (dia == 6){
                      //  printf("Sexta");}
                        //else{printf("Sábado");}}}}}}
    
    switch (dia) {
        case 1:
        printf("domingo");
        break;
        case 2:
        printf("segunda");
        break;
        case 3:
        printf("terça");
        break;
        case 4:
        printf("quarta");
        break;
        case 5:
        printf("quinta");
        break;
        case 6:
        printf("sexta");
        break;
        default:
        printf("sábado");
        break;

        return 0;


    }
   
               
            
        
    







}