#include <stdio.h> //Biblioteca para printf e scanf.
#include <string.h> //Biblioteca para strlen e strcmp.
#include <stdlib.h> //Biblioteca para system.
#include <ctype.h> //Serve para classificar caracteres ASCII.
#include <locale.h> //Localizar um programa e fazer adaptações às características de um determinado idioma ou região.
#include <stdbool.h> //Denota em uma função que retorna um valor do tipo bool.

int main(){ //Inicialização do código.
	
	char nome[100], endereco[50], complemento[50], numero[10], bairro[20], estado [3], cidade[20], email[50], modeloV[30], cor[10], placa[15], opcao, cep[10], dataNas[12]; //Serve para escrever informações de um tema.
	bool recebaEmail; //Retorna um valor do tipo bool.
	int dddres_com, telFix, dddcelular, telCel, inscricaoEs, cpf, cnpj, inscricaoMu, cnae, telR, telefoneComercial, data, assResp, ano; //Serve para digitar números inteiros.
	
	setlocale(LC_ALL, "Portuguese"); //Declaração de variáveis do código.
	printf("\t\t====================\t\t\n");
	printf("\t\tDADOS DO CREDENCIADO\t\t\n"); //Apresenta texto na tela.
    printf("\t\t====================\t\t\n");
	printf("Razão Social e Nome Completo: \n");
	fgets(nome, 100, stdin); //Recebe string com espaço em branco. fgtes("nome da variável", "tamanho da variável", stdin).
	fflush(stdin); //Limpa o buffer de memória.
	
	printf("Endereço: \n");
	fgets(endereco, 50, stdin);
	fflush(stdin);
	
	printf("Número: \n");
	fgets(numero, 10, stdin);
	fflush(stdin);
	
	printf("Complemento: \n");
	fgets(complemento, 50, stdin);
	fflush(stdin);
	
	printf("Bairro: \n");
	fgets(bairro, 20, stdin);
	fflush(stdin);
	
	printf("CEP: \n");
	fgets(cep, 10, stdin); //Recebe string com espaço em branco. fgtes("nome da variável", "tamanho da variável", stdin).
	fflush(stdin); //Limpa o buffer de memória.
	
	printf("Estado(sigla): \n");
	scanf("%s", &estado);
	
	printf("Cidade: \n");
	scanf("%s", &cidade);
	
	printf("DDD do Telefone Residencial ou Comercial: \n");
	scanf("%d", &dddres_com);
	
	printf("Telefone Residencial ou Comercial: \n");
	scanf("%d", &telFix); //Caso o usuário coloque que não tenha, o fgets permite essa ação.
	
	printf("DDD do celular: \n");
	scanf("%d", &dddcelular);
	
	printf("Telefone Celular: \n");
	scanf("%d", &telCel);
	
	printf("Digite o CPF: \n");
	scanf("%d", &cpf);
	
	printf("Digite o CNPJ (Preenchimento exclusivo para PJ): \n");
	scanf("%d", &cnpj);

	printf("Insc. Estadual: (preenchimento exclusivo para PJ): \n");
	scanf("%d", &inscricaoEs); //Salva a variável e faz parte da coleção de char.
	
	printf("Insc. Municipal: (preenchimento exclusivo para PJ): \n");
	scanf("%d", &inscricaoMu);
	
	printf("CNAE: (preenchimento exclusivo para PJ): \n");
	scanf("%d", &cnae);
	
	printf("Data de Nascimento: \n");
	scanf("%s", &dataNas);
	
	fflush(stdin);
	printf("Deseja receber os proximos boletos por e-mail(S/N)?: \n");
    opcao = getchar();
    if (toupper(opcao) == 'S'){ //Insere a confirmação da variável.
    	recebaEmail = 1;
     }else if(toupper(opcao) == 'N'){ //Caso contrário, mostra a mensagem e finaliza o while.
    	recebaEmail = 0;
	printf("Nao\n\n");
     }else{ //Caso contrário, mostra a mensagem de sucesso e finaliza o while.
    printf("Opcao Invalida\n\n");
     } 
     
		    
	printf("E-mail: \n");
	scanf("%s", &email);
	
	printf("Contato do responsável (em caso de Pessoa Jurídica): \n");
	scanf("%d", &telR);	

	printf("Telefone comercial: \n");
	scanf("%d", &telefoneComercial);

	printf("Data: \n");
	scanf("%d", &data);
	
	printf("Assinatura do responsável: \n");
	scanf("%s", &assResp);
	system("cls");

    printf("\t\t==================\t\t\n");
	printf("\t\tDADOS DOS VEICULOS\t\t\n"); //Apresenta texto na tela.
	printf("\t\t==================\t\t\n");
	printf("Placa: \n");
	scanf("%s", &placa); //Salva a variável e faz parte da coleção de char.

	printf("Modelo: \n");
	scanf("%s", &modeloV);
		
	printf("Ano: \n");
	scanf("%d", &ano);
	
	printf("Cor: \n");
	scanf("%s", &cor);

	return 0; //Retorno do código.
}
