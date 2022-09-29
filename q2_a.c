//Use um laço while para imprimir números pares múltiplos de 4. Use uma variável de controle onde seu incremento é de uma unidade. Quando a variável for testada e não for múltiplo de 4 use o continue. Caso contrário imprima o número.
#include <stdio.h>

int main() {
  int numero;
  printf("Vai comecar o programa.\n\n\n");
  printf("Digite um numero:\n");
  scanf("%d", &numero);
  int i=0;  
  while (i<=numero){
    if(i%2==0){
       if(i%4==0){
         printf("O número %d é mutiplo de 4.\n",i);
        }else{
         continue;
        }
      }
    i++;
    } 
  return (0);
}