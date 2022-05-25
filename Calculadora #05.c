#include <stdio.h> //Biblioteca para printf e scanf.
#include <stdlib.h> //Bilbioteca para system.
#include <Windows.h> //Serve para pegar o id de uma janela através do texto da barra de título.
#include <locale.h> //Localizar um programa e fazer adaptações às características de um determinado idioma ou região.

char le_valida_operador(); //Serve para escrever informações de um tema.
int menu(); //Serve para digitar números inteiros.
void operador(float p1, float p2, char opz); //Permite fazer funções que não retornam nada e/ou funções que não têm parâmetros.

int main()
{ //Inicialização do código.
    int result; //Serve para digitar números inteiros.
    float num1, num2; //Armazena números com ponto flutuante (reais) com precisão simples.
    char op; //Serve para escrever informações de um tema.

    setlocale(LC_ALL, "Portuguese"); //Declaração de variáveis do código.
    do
    {
    	printf("===========\n");
        printf("CALCULADORA\n"); //Apresenta texto na tela.
        printf("===========\n");
        printf("INSIRA SEU NÚMERO 1: ");
        scanf("%f", &num1); //Salva a variável e faz parte da coleção de char.
        op = le_valida_operador();
        printf("INSIRA SEU NÚMERO 2: ");
        scanf("%f", &num2); //Salva a variável e faz parte da coleção de char.

        operador(num1, num2, op);
        result = menu();
    } while (result != 1); //Repetição quando um nome for inválido.
}

char le_valida_operador()
{
    char opz;
    fflush(stdin); //Limpa o buffer de memória.
    printf("INSIRA A OPERAÇÃO: ");
    scanf("%c", &opz);
    return opz; //Retorno do char (opz).
}

void operador(float p1, float p2, char opz)
{
    switch (opz)
    { //Controla o fluxo do programa para ser executado em várias condições.
    case '+':
        printf("O RESULTADO DA OPERAÇÃO FOI %.2f", p1 + p2);
        break;
    case '-':
        printf("O RESULTADO DA OPERAÇÃO FOI %.2f", p1 - p2);
        break;
    case '*':
        printf("O RESULTADO DA OPERAÇÃO FOI %.2f", p1 * p2);
        break;
    case '/':
    	if(p2 == 0){
    		printf("O RESULTADO DA OPERAÇÃO É ZERO/INVÁLIDO \n");
		}else{
			printf("O RESULTADO DA OPERAÇÃO FOI %.2f", p1 / p2);
		}
        break;
    }
}

int menu()
{
    int n;
    Sleep(2000);
    printf("\n\nDESEJA SAIR DA CALCULADORA?\n\n[1] - SIM [2] - NÃO\n\n");
    scanf("%d", &n);
    return n; //Retorno do int (n).
}
