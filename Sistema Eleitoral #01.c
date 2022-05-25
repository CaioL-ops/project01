#include <stdio.h> //Biblioteca para printf e scanf.
#include <locale.h> //Localizar um programa e fazer adaptações às características de um determinado idioma ou região.

int main(){ //Inicialização do código.
	int idade; //Serve para digitar números inteiros.
	
	setlocale(LC_ALL, "Portuguese"); //Declaração de variáveis do código.
	printf("=========\n");
	printf("ELEITORAL\n"); //Apresenta texto na tela.
	printf("=========\n");
	printf("INSIRA SUA IDADE: ");
	scanf("%d", &idade); //Salva a variável e faz parte da coleção de char.
	
	if(idade < 0){
		printf("NÃO NASCEU\n");
	}else{
	if (idade < 16){
		printf("NÃO VOTA\n");
	}else{
	if (idade < 18){ //Insere a confirmação da variável.
		printf("VOTO OPCIONAL\n"); //Apresenta texto na tela.
	}else{ //Caso contrário, mostra a mensagem de sucesso e finaliza o while.
	if (idade < 65){
	if (idade == 41){
		printf("GANHA PRÊMIO 1 $$$\n");
	}else{
		printf("VOTO OBRIGATÓRIO\n");
	}
	}else{
	if (idade == 82){
		printf("GANHA PRÊMIO 2 $$$\n");
	}else{
		printf("VOTO OPCIONAL\n");
		  }
	   }
    }
  }
}
	
	return 0; //Retorno do código.
}
