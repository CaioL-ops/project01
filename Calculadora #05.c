#include <stdio.h> //Biblioteca para printf e scanf.
#include <stdlib.h> //Bilbioteca para system.
#include <Windows.h> //Serve para pegar o id de uma janela atrav�s do texto da barra de t�tulo.
#include <locale.h> //Localizar um programa e fazer adapta��es �s caracter�sticas de um determinado idioma ou regi�o.

char le_valida_operador(); //Serve para escrever informa��es de um tema.
int menu(); //Serve para digitar n�meros inteiros.
void operador(float p1, float p2, char opz); //Permite fazer fun��es que n�o retornam nada e/ou fun��es que n�o t�m par�metros.

int main()
{ //Inicializa��o do c�digo.
    int result; //Serve para digitar n�meros inteiros.
    float num1, num2; //Armazena n�meros com ponto flutuante (reais) com precis�o simples.
    char op; //Serve para escrever informa��es de um tema.

    setlocale(LC_ALL, "Portuguese"); //Declara��o de vari�veis do c�digo.
    do
    {
    	printf("===========\n");
        printf("CALCULADORA\n"); //Apresenta texto na tela.
        printf("===========\n");
        printf("INSIRA SEU N�MERO 1: ");
        scanf("%f", &num1); //Salva a vari�vel e faz parte da cole��o de char.
        op = le_valida_operador();
        printf("INSIRA SEU N�MERO 2: ");
        scanf("%f", &num2); //Salva a vari�vel e faz parte da cole��o de char.

        operador(num1, num2, op);
        result = menu();
    } while (result != 1); //Repeti��o quando um nome for inv�lido.
}

char le_valida_operador()
{
    char opz;
    fflush(stdin); //Limpa o buffer de mem�ria.
    printf("INSIRA A OPERA��O: ");
    scanf("%c", &opz);
    return opz; //Retorno do char (opz).
}

void operador(float p1, float p2, char opz)
{
    switch (opz)
    { //Controla o fluxo do programa para ser executado em v�rias condi��es.
    case '+':
        printf("O RESULTADO DA OPERA��O FOI %.2f", p1 + p2);
        break;
    case '-':
        printf("O RESULTADO DA OPERA��O FOI %.2f", p1 - p2);
        break;
    case '*':
        printf("O RESULTADO DA OPERA��O FOI %.2f", p1 * p2);
        break;
    case '/':
    	if(p2 == 0){
    		printf("O RESULTADO DA OPERA��O � ZERO/INV�LIDO \n");
		}else{
			printf("O RESULTADO DA OPERA��O FOI %.2f", p1 / p2);
		}
        break;
    }
}

int menu()
{
    int n;
    Sleep(2000);
    printf("\n\nDESEJA SAIR DA CALCULADORA?\n\n[1] - SIM [2] - N�O\n\n");
    scanf("%d", &n);
    return n; //Retorno do int (n).
}
