// Cria um programa que receba dados via teclado e grave em um arquivo.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include <iostream>

int main() {

    char linhaTexto[30];
    printf("Escreva ate 30 caracteres:\n\n");
    char msg[30];
    scanf("%s", linhaTexto);
    strcat(linhaTexto," \n");
    FILE *fp;
    fp = fopen("avaliacao5.txt", "at+");

    printf ("Arquivo criado com sucesso!\n");


    fputs(linhaTexto, fp);
    int fechou;
    fechou = fclose (fp);
    if(fechou == 0){
        puts("Arquivo fechado com sucesso!\n");
    } else {
        puts("Erro ao fechar arquivo!\n");
    }

    return 0;
}
