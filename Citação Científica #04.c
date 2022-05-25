#include <string.h> //Biblioteca para strlen e strcmp.
#include <stdio.h> //Biblioteca para printf e scanf.
#include <stdlib.h> //Bilbioteca para system.

int main () { //Inicialização do código.
   char nome[70]; //Serve para escrever informações de um tema.
   int i=0,j=0,tam,espaco[10],past,name,miz,ult; //Serve para digitar números inteiros.
   
   
   printf("INSIRA SEU NOME: \n"); //Apresenta texto na tela.
   scanf("%[^\n]s",nome); //Salva a variável e faz parte da coleção de char.
   
   tam = strlen(nome);

   while( tam > i) { //É usado quando não sabemos quantas vezes um determinado bloco de instruções precisa ser repetido.
       if (nome[i] == ' ' ){ //Insere a confirmação da variável.
           espaco[j] = i;
           j++;
       }
       i++;
        
   }
   j--;
    past = j;
    name = espaco[past]+1;

    while (name <= tam){ //É usado quando não sabemos quantas vezes um determinado bloco de instruções precisa ser repetido.
        printf("%c",toupper(nome[name]));
        past++;
        name++;
        ult++;
    }
    j--;
    tam = tam-ult;
    tam = tam-1;
    i=0;
    printf(",%c",nome[0]);
    past = j;
    j = 0;
   while (j<= past){ //É usado quando não sabemos quantas vezes um determinado bloco de instruções precisa ser repetido.
       miz = espaco[j]+1;
       printf(".%c",nome[miz]);
       j++;


   }
   
   return(0); //Retorno do código.
}
