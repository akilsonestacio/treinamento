#include <stdio.h>
int main(){
int a = 10;
int b = 20;
int x = 5;
float y = 5.0;
char c = 'a';
float numero1 = 10.2;
int numero2 = 10;

printf("a >= b: %d \n", a >= b);
printf("a < b: %d \n", a <= b);
printf("a == b: %d \n", a == b);
printf("a != b: %d \n", a != b);

printf("x >= y: %d \n", x >= y);
printf("x == y: %d \n", x == x);
printf("x != y: %d \n", x != y);
printf("x >= c: %d \n", x >= c);
printf("o valor ascii de %c é %d \n", c, c);

printf("numero1 > numero2: %d \n", (int) numero1 > numero2);
printf("numero1 == numero2: %d", (int) numero1 == numero2);



return 0;




}