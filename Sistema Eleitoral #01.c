#include <stdio.h> //Biblioteca para printf e scanf.
#include <locale.h> //Localizar um programa e fazer adapta��es �s caracter�sticas de um determinado idioma ou regi�o.

int main(){ //Inicializa��o do c�digo.
	int idade; //Serve para digitar n�meros inteiros.
	
	setlocale(LC_ALL, "Portuguese"); //Declara��o de vari�veis do c�digo.
	printf("=========\n");
	printf("ELEITORAL\n"); //Apresenta texto na tela.
	printf("=========\n");
	printf("INSIRA SUA IDADE: ");
	scanf("%d", &idade); //Salva a vari�vel e faz parte da cole��o de char.
	
	if(idade < 0){
		printf("N�O NASCEU\n");
	}else{
	if (idade < 16){
		printf("N�O VOTA\n");
	}else{
	if (idade < 18){ //Insere a confirma��o da vari�vel.
		printf("VOTO OPCIONAL\n"); //Apresenta texto na tela.
	}else{ //Caso contr�rio, mostra a mensagem de sucesso e finaliza o while.
	if (idade < 65){
	if (idade == 41){
		printf("GANHA PR�MIO 1 $$$\n");
	}else{
		printf("VOTO OBRIGAT�RIO\n");
	}
	}else{
	if (idade == 82){
		printf("GANHA PR�MIO 2 $$$\n");
	}else{
		printf("VOTO OPCIONAL\n");
		  }
	   }
    }
  }
}
	
	return 0; //Retorno do c�digo.
}
