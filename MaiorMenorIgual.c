#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

   int palpite;
   int aleatorio;
   char opcao;
   srand(time(0));
   aleatorio = rand() % 100 + 1;
   
   printf("***JOGO DO MAIOR NÚMERO*** \n");
   printf("*Opções Disponíveis* \n");
   printf("(M) Para escolher o Maior Número \n");
   printf("(m) Para escolher o Menor \n");
   printf("(=) Para escolher o Número igual \n");
   printf("Digite a opção: ");
   scanf("%c",&opcao);
   
   switch (opcao)
   {
   case 'M':
   printf("Digite o Número: ");
   scanf("%d", &palpite); 
      palpite > aleatorio? printf("Você venceu com o número %d, pois computador escolheu o número %d", palpite, aleatorio) : printf("Perdeu");
   /*if (palpite > aleatorio){
      printf("Você venceu com o número %d, pois computador escolheu o número %d", palpite, aleatorio);
   }else{printf("Você perdeu com o número %d, pois o computador escoheu o número %d", palpite, aleatorio);}
      break;*/
   break;
   
      case 'm':
      printf("Digite o Número: ");
      scanf("%d", &palpite);
      if (palpite < aleatorio) {
      printf("Você venceu com o número %d, pois computador escolheu o número %d", palpite, aleatorio);
   }else{printf("Você perdeu com o número %d, pois o computador escoheu o número %d", palpite, aleatorio);}
   break;
   
   case '=':
   printf("Digite o Número: ");
   scanf("%d", &palpite);
   if (palpite == aleatorio) {
      printf("Você venceu com o número %d, pois computador escolheu o número %d", palpite, aleatorio);
   }else{printf("Você perdeu com o número %d, pois o computador escoheu o número %d", palpite, aleatorio);}
   break;
   
   default:
   printf ("Opção Inválidada");
   break;
   }



return 0;

}