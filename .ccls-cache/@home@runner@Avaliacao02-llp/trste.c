#include <stdio.h>

int main(void) {
  //Escreva um programa em C onde é mostrado os valores de inteiros pares e múltiplos de 5.
  int numero;
  printf("Vai comecar o programa.\n\n\n");
  printf("Digite um numero:\n");
  scanf("%d", &numero);
  

  int i;
  for (i=1;i<=numero;i++){
    if(i%2==0 & i%5==0){
      printf("O número %d é mutiplo de 2 e 5.\n",i);
    }
  }
  
  return 0;
}
