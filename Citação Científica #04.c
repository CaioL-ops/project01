#include <string.h> //Biblioteca para strlen e strcmp.
#include <stdio.h> //Biblioteca para printf e scanf.
#include <stdlib.h> //Bilbioteca para system.

int main () { //Inicializa��o do c�digo.
   char nome[70]; //Serve para escrever informa��es de um tema.
   int i=0,j=0,tam,espaco[10],past,name,miz,ult; //Serve para digitar n�meros inteiros.
   
   
   printf("INSIRA SEU NOME: \n"); //Apresenta texto na tela.
   scanf("%[^\n]s",nome); //Salva a vari�vel e faz parte da cole��o de char.
   
   tam = strlen(nome);

   while( tam > i) { //� usado quando n�o sabemos quantas vezes um determinado bloco de instru��es precisa ser repetido.
       if (nome[i] == ' ' ){ //Insere a confirma��o da vari�vel.
           espaco[j] = i;
           j++;
       }
       i++;
        
   }
   j--;
    past = j;
    name = espaco[past]+1;

    while (name <= tam){ //� usado quando n�o sabemos quantas vezes um determinado bloco de instru��es precisa ser repetido.
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
   while (j<= past){ //� usado quando n�o sabemos quantas vezes um determinado bloco de instru��es precisa ser repetido.
       miz = espaco[j]+1;
       printf(".%c",nome[miz]);
       j++;


   }
   
   return(0); //Retorno do c�digo.
}
