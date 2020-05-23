#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <locale.h> // biblioteca para acento de texto


typedef struct
{ // Cria uma STRUCT para armazenar os dados do cadastro
	char nome[200];
	char tel[200];
	char endereco[200];
} cad; // Define o nome do novo tipo criado

int main(){
	//system("MODE con cols=125 lines=50"); // Tamanho da tela
	system("MODE con cols=125 lines=50");
	
	// Tela de Login e Senha
    
	printf("\n\n\n                 Entre com Usuario e Senha para continuar...\n");
	printf("                _____________________________________________\n");
	printf("                _____________________________________________\n");
	printf("\t\t                    _####_\n");
	printf("\t\t                  #        #\n");
	printf("\t\t                 #          #\n");
	printf("\t\t                 #          #\n");
	printf("\t\t                 #          #\n");
	printf("\t\t                ##############\n");
	printf("\t\t               #              #\n");
	printf("\t\t               #              #\n");
	printf("\t\t               #      ##      #\n");
	printf("\t\t               #     ####     #\n");
	printf("\t\t               #     ####     #\n");
	printf("\t\t               #      ##      #\n");
	printf("\t\t               #      ##      #\n");
	printf("\t\t               ################\n");

	printf("                 ____________________________________________\n");
	printf("                 ____________________________________________\n");

	char login[15] = "Ricardo"; //Tem que ter mais espaço que a string. Pelo menos 1 a mais que a palavra.
	char login1[15];			//Pode ser do mesmo tamanho que o login
	char senha[15] = "123";
	char senha1[15];

	printf("\t\tLogin: ");
	scanf("%s", login1);
	printf("\t\tSenha: ");
	scanf("%s", senha1);

	if (strcmp(login, login1) == 0)
		if (strcmp(senha, senha1) == 0) //strcmp() é uma função da biblioteca string.h que compara 2 strings. Se for igual a 0 é porque as duas são iguais.

		{
			system("cls");
			printf("\n                              Seja bem vindo!!!\n");
			printf(" _____________________________________________________________________________\n");
			printf(" _____________________________________________________________________________\n");
			printf("\n                             ##\n");
			printf("\t                    ##\n");
			printf("\t                   ##\n");
			printf("\t                  ##\n");
			printf("\t                 ##\n");
			printf("\t   ##           ##\n");
			printf("\t    ##         ##\n");
			printf("\t     ##       ##\n");
			printf("\t      ##     ##\n");
			printf("\t       ##   ##\n");
			printf("\t        #####\n");
			printf("\t         ###\n");
			printf(" _______________________________________________________________________________\n");
			printf(" _______________________________________________________________________________\n");
			printf("       Respeite as normas e a etica da empresa\n\n\n");

			system("pause");
			//return 0;

			inicio();
		}
		else{
			printf("\t\tUsuário ou Senha incorretos, por favor tente novamente!\n\n\n\n\n");
			system("pause");
			main();
		}

	return 0;
}

int inicio()
{

	system("cls");
	int opcao; // variaveis
	
	struct tm *data_hora_atual;
	time_t segundos;
	time(&segundos);
	data_hora_atual = localtime(&segundos);
	printf("\n Data: %d/", data_hora_atual->tm_mday);
	printf("%d/", data_hora_atual->tm_mon + 1);			 //mês
	printf("%d\t\t\t", data_hora_atual->tm_year + 1900); //ano
	printf("Hora: %d:", data_hora_atual->tm_hour);		 //hora
	printf("%d", data_hora_atual->tm_min);				 //minuto
	
	
	 printf("\n\n\n\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",3017,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3003);
     printf("\t\t\t%c       PIZZARIA UNIVERSIDADE UNIP       %c\n",3002,3002);
     printf("\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",3016,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3004);

     printf("\n\n");
     printf("\t\t  1  %c   CRIAR NOVO PEDIDO\n\n\t\t  2  %c   CADASTRO DE CLIENTES\n\n\t\t  3  %c   REGISTRO DE CLIENTES\n\n\t\t  4  %c   CADASTRO DE BEBIDAS\n\n\t\t  5  %c   SAIR DO SISTEMA\n\n",16,16,16,16,16,16,16,136,16);
     printf("\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~      %c ",26);
     

	scanf("%d", &opcao); // scanf é função para fluxo de entrada, enquanto "%d" é a formatação do argumento para números int.
	getchar();			 //começa a ler depois que a tecla é digitada no final de uma sequência de caracteres(pega os caracteres e armazena)

	if (opcao == 1){ // If, condições para tomadas de decisão conforme o digito inserido no Menu
		printf("\n Você digitou 1");
		cardapio(); // chamar evento
	}
	else if (opcao == 2){
		cliente(); // chamar tela de cliente
	}
	else if (opcao == 3){
		clientes_cadastrados();
	}
	else if (opcao == 4){
		printf("\n Você digitou 3");
	}
	else if (opcao == 4){
		fechar();
	}
}
cliente(){

	int opcao_cliente;

	system("cls"); // Limpa a tela anterior

		printf("\n\t\t\tPIZZARIAS UNIVERSIDADE UNIP\n\n");
		printf("\n\n\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%\n",3017,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3003);
     	printf("\t\t\t%c       CADASTRO DE CLIENTES       %c\n",3002,3002);
     	printf("\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%",3016,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3021,3004);
	
		printf("\n\n");
     	printf("\t\t  1  %c   CONSULTAR CLIENTE\n\n\t\t  2  %c   NOVO CADASTRO DE CLIENTE\n\n\t\t  3  %c   VOLTAR PARA TELA INICIAL\n\n\t\t  4  %c   SAIR\n\n",16,16,16,16,16,16,16,136,16);
     	printf("\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~      %c ",26);
	


	scanf("%d", &opcao_cliente);
	getchar();

	if (opcao_cliente == 1){
		clientes_cadastrados();
	}
	else if (opcao_cliente == 2){
		cadastro_cliente();
	}
	else if (opcao_cliente == 3){
		inicio();
	}
	else if (opcao_cliente == 4){
		fechar();
	}
}

cadastro_cliente(){

	system("cls");
	int opcao2;
	FILE *pont_arq; // cria variável ponteiro para o arquivo
	char Nome[200]; // variável do tipo string
	char Endereco[200];
	char Numero[200];
	char Cidade[200];
	char Contato[200];

	pont_arq = fopen("Cadastro de Clientes.txt", "a"); // abrindo o arquivo com tipo de abertura "a",["a" adiciona, "r" somente leitura, "w" grava por cima]

	//Verificar se o banco de dados existe
	if (pont_arq == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}

	printf("\a\n\n\t\t...........CADASTRO DE CLIENTES........\n\n");
	printf("\n_______________________________________________________\n");

	printf("Nome do Cliente: ");
	scanf("%[^\n\v]s", Nome); // "%[^\n]s" para digitar nomes com espaços, caso contrário usar "%s"
	setbuf(stdin, NULL);	  // limpando o buffer para usar novamente "%[^\n]s"

	printf("Endereço de Entrega: ");
	scanf("%[^\n\v]s", Endereco);
	setbuf(stdin, NULL);

	printf("Numero da Residencia: ");
	scanf("%[^\n\v]s", Numero);
	setbuf(stdin, NULL);
	
	printf("Cidade: ");
	scanf("%[^\n\v]s", Cidade);
	setbuf(stdin, NULL);
	
	printf("Contato: ");
	scanf("%[^\n\v]s", Contato);
	setbuf(stdin, NULL);

	printf("\n_______________________________________________________\n\n\n\n\n");

	//usando fprintf para armazenar a string no arquivo

	fprintf(pont_arq, "%-27s", Nome);
	fprintf(pont_arq, "|%-33s", Endereco); // | é o caractere para desenhar a tabela no txt
	fprintf(pont_arq, "|%-10s", Numero);//25 indica 25 caracteres casas não usadas serão preenchidas com espaço em branco
	fprintf(pont_arq, "|%-20s", Cidade);
	fprintf(pont_arq, "|%-20s\n", Contato);

	printf("\n\n\n_______________________________________________________");
	printf("\n  1 - Digite 1 para voltar ao Menu Principal");
	printf("\n  2 - Digite 2 para sair");
	printf("\n  3 - Para novo cadastro");

	//usando fclose para fechar o arquivo
	fclose(pont_arq);

	scanf("%d", &opcao2);
	getchar();
	if (opcao2 == 1){
		inicio();
	}
	else if (opcao2 == 2){
		fechar();
	}
	else if (opcao2 == 3){
		cadastro_cliente();
	}
}

cardapio(){

	// criar tela de cardapio
	int criar;
	system("cls"); // Limpa a tela anterior

	printf("\n\t\t\tPIZZARIAS UNIVERSIDADE UNIP\n\n");
	printf("\a\n\n\t\t...........CARDAPIO........\n\n");
	printf("\n_______________________________________________________");
	printf("\n  1 - Criar Novo Pedido");

	scanf("%d", &criar);
	getchar();

	if (criar == 1){
		printf("\n Em construção 2");
	}
}

bebidas(){
	system("cls");
	FILE *pont_arq;
	char codigo[200]; // variável do tipo string
	char descricao[200];
	char preco[200];

	pont_arq = fopen("Cadastros de bebidas.txt", "a"); // brindo o arquivo com tipo de abertura "a",["a" adiciona, "r" somente leitura, "w" grava por cima]
}

clientes_cadastrados(){ // abrindo somente leitura
	system("cls");
	int esc_opcao;

	FILE *pont_arq;
	char texto_str[20];

	pont_arq = fopen("Cadastro de Clientes.txt", "r");

	printf("\n\t\t\t\t\t CLIENTES CADASTRADOS:\n\n");
	
	//enquanto não for fim de arquivo o looping será executado
	//e será impresso o texto
	while (fgets(texto_str, 20, pont_arq) != NULL)
		printf("%s", texto_str);

	printf("\n\n\n_______________________________________________________");
	printf("\n  1 - Digite 1 para voltar ao Menu Principal");
	printf("\n  2 - Digite 2 para sair");
	printf("\n  3 - Para novo cadastro");

	scanf("%d", &esc_opcao);
	getchar();

	if (esc_opcao == 1){
		inicio();
	}
	else if (esc_opcao == 2){
		fechar();
	}
	else if (esc_opcao == 3){
		cadastro_cliente();
	}

	//fechando o arquivo
	fclose(pont_arq);
	getch();
	return (0);
}

fechar(){ // fechar sistema
	exit(0);
}

