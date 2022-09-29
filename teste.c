#include <stdio.h>

int main() {
 
  int numero=15;
  int i=0;  
  while (i<=numero){
  	if(i%2==0){
    	if(i%4==0){
        	printf("O número %d é mutiplo de 4.\n",i);
        }
        else{
         continue;
        }
      }
    i++;
    } 
  return 0;
}