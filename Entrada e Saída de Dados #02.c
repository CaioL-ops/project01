#include <stdio.h> //Biblioteca para printf e scanf.
#include <string.h> //Biblioteca para strlen e strcmp.
#include <stdlib.h> //Biblioteca para system.
#include <ctype.h> //Serve para classificar caracteres ASCII.
#include <locale.h> //Localizar um programa e fazer adapta��es �s caracter�sticas de um determinado idioma ou regi�o.
#include <stdbool.h> //Denota em uma fun��o que retorna um valor do tipo bool.

int main(){ //Inicializa��o do c�digo.
	
	char nome[100], endereco[50], complemento[50], numero[10], bairro[20], estado [3], cidade[20], email[50], modeloV[30], cor[10], placa[15], opcao, cep[10], dataNas[12]; //Serve para escrever informa��es de um tema.
	bool recebaEmail; //Retorna um valor do tipo bool.
	int dddres_com, telFix, dddcelular, telCel, inscricaoEs, cpf, cnpj, inscricaoMu, cnae, telR, telefoneComercial, data, assResp, ano; //Serve para digitar n�meros inteiros.
	
	setlocale(LC_ALL, "Portuguese"); //Declara��o de vari�veis do c�digo.
	printf("\t\t====================\t\t\n");
	printf("\t\tDADOS DO CREDENCIADO\t\t\n"); //Apresenta texto na tela.
    printf("\t\t====================\t\t\n");
	printf("Raz�o Social e Nome Completo: \n");
	fgets(nome, 100, stdin); //Recebe string com espa�o em branco. fgtes("nome da vari�vel", "tamanho da vari�vel", stdin).
	fflush(stdin); //Limpa o buffer de mem�ria.
	
	printf("Endere�o: \n");
	fgets(endereco, 50, stdin);
	fflush(stdin);
	
	printf("N�mero: \n");
	fgets(numero, 10, stdin);
	fflush(stdin);
	
	printf("Complemento: \n");
	fgets(complemento, 50, stdin);
	fflush(stdin);
	
	printf("Bairro: \n");
	fgets(bairro, 20, stdin);
	fflush(stdin);
	
	printf("CEP: \n");
	fgets(cep, 10, stdin); //Recebe string com espa�o em branco. fgtes("nome da vari�vel", "tamanho da vari�vel", stdin).
	fflush(stdin); //Limpa o buffer de mem�ria.
	
	printf("Estado(sigla): \n");
	scanf("%s", &estado);
	
	printf("Cidade: \n");
	scanf("%s", &cidade);
	
	printf("DDD do Telefone Residencial ou Comercial: \n");
	scanf("%d", &dddres_com);
	
	printf("Telefone Residencial ou Comercial: \n");
	scanf("%d", &telFix); //Caso o usu�rio coloque que n�o tenha, o fgets permite essa a��o.
	
	printf("DDD do celular: \n");
	scanf("%d", &dddcelular);
	
	printf("Telefone Celular: \n");
	scanf("%d", &telCel);
	
	printf("Digite o CPF: \n");
	scanf("%d", &cpf);
	
	printf("Digite o CNPJ (Preenchimento exclusivo para PJ): \n");
	scanf("%d", &cnpj);

	printf("Insc. Estadual: (preenchimento exclusivo para PJ): \n");
	scanf("%d", &inscricaoEs); //Salva a vari�vel e faz parte da cole��o de char.
	
	printf("Insc. Municipal: (preenchimento exclusivo para PJ): \n");
	scanf("%d", &inscricaoMu);
	
	printf("CNAE: (preenchimento exclusivo para PJ): \n");
	scanf("%d", &cnae);
	
	printf("Data de Nascimento: \n");
	scanf("%s", &dataNas);
	
	fflush(stdin);
	printf("Deseja receber os proximos boletos por e-mail(S/N)?: \n");
    opcao = getchar();
    if (toupper(opcao) == 'S'){ //Insere a confirma��o da vari�vel.
    	recebaEmail = 1;
     }else if(toupper(opcao) == 'N'){ //Caso contr�rio, mostra a mensagem e finaliza o while.
    	recebaEmail = 0;
	printf("Nao\n\n");
     }else{ //Caso contr�rio, mostra a mensagem de sucesso e finaliza o while.
    printf("Opcao Invalida\n\n");
     } 
     
		    
	printf("E-mail: \n");
	scanf("%s", &email);
	
	printf("Contato do respons�vel (em caso de Pessoa Jur�dica): \n");
	scanf("%d", &telR);	

	printf("Telefone comercial: \n");
	scanf("%d", &telefoneComercial);

	printf("Data: \n");
	scanf("%d", &data);
	
	printf("Assinatura do respons�vel: \n");
	scanf("%s", &assResp);
	system("cls");

    printf("\t\t==================\t\t\n");
	printf("\t\tDADOS DOS VEICULOS\t\t\n"); //Apresenta texto na tela.
	printf("\t\t==================\t\t\n");
	printf("Placa: \n");
	scanf("%s", &placa); //Salva a vari�vel e faz parte da cole��o de char.

	printf("Modelo: \n");
	scanf("%s", &modeloV);
		
	printf("Ano: \n");
	scanf("%d", &ano);
	
	printf("Cor: \n");
	scanf("%s", &cor);

	return 0; //Retorno do c�digo.
}
