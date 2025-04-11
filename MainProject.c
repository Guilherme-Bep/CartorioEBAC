#include <stdio.h> // comunica��o com o usu�rio
#include <stdlib.h> // aloca��o de espa�o na mem�ria
#include <locale.h> // aloca��o de texto por rgi�o
#include <string.h> // bbtk respons�vel por cuidar das strings

// fun��o de registro: respons�vel por cadastrar os usu�rios
int reg() {
    char arquivo[40], cpf[40], nome[40], sobrenome [40], cargo[40]; //In�cio da cria��o de vari�veis/string


    printf("Digite o CPF a ser cadastrado: "); //Exibe uma informa��o para o usu�rio
    scanf("%s", cpf); // coleta informa��es fornecidas pelo usu�rio

    strcpy(arquivo, cpf); // Respons�vel por copiar os valores das strings

        FILE *file; //chama a fun��o file, e cria o arquivo file
        file = fopen(arquivo, "w"); // cria o arquivo
        fprintf(file, "CPF: "); //
        fprintf(file, cpf); // salva o valor da vari�vel no arquivo
        fclose(file); //fecha o arquivo

        file = fopen(arquivo, "a"); // quero atualizar as informa��es "a"
        fprintf(file, "\n");
        fclose(file); //fecha o arquivo

    printf("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);


            file = fopen(arquivo, "a"); // atualiza
            fprintf(file, "NOME: ");
            fprintf(file, nome); // salva o valor da vari�vel no arquivo
            fclose(file); //fecha o arquivo

            file = fopen(arquivo, "a"); // quero atualizar as informa��es "a"
            fprintf(file, "\n"); //cria uma separa��o por v�rgula
            fclose(file); //fecha o arquivo


    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", sobrenome);


            file = fopen(arquivo, "a"); // atualiza
            fprintf(file, "SOBRENOME: ");
            fprintf(file, sobrenome); // salva o valor da vari�vel no arquivo
            fclose(file); //fecha o arquivo

            file = fopen(arquivo, "a"); // quero atualizar as informa��es "a"
            fprintf(file, "\n");
            fclose(file); //fecha o arquivo

    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s", cargo);


            file = fopen(arquivo, "a"); // atualiza
            fprintf(file, "CARGO: ");
            fprintf(file, cargo); // salva o valor da vari�vel no arquivo
            fclose(file); //fecha o arquivo

            file = fopen(arquivo, "a"); // quero atualizar as informa��es "a"
            fprintf(file, "\n");
            fclose(file); //fecha o arquivo

system("pause");

}


//fun��o de consultar
int cons() {

    setlocale(LC_ALL, "Portuguese_Brazil");



    char cpf[40];
    char conteudo[200];

    printf("Digite o cpf a ser consultado: ");
    scanf("%s", cpf);

    FILE *file;
    file = fopen(cpf, "r"); //abre o arquivo e ler(read) o dado cpf

    if (file == NULL) {
        printf("\nN�o foi poss�vel abrir o arquivo, CPF n�o localizado!\n");
     }

        while(fgets(conteudo, 200, file)!= NULL) { //enquanto fgets busca no arquivo o conteudo, que o tamanho m�ximo � 200, enquanto ele tiver dentro do arquivo, e s� vai parar quando for nulo.

            printf("\n\t");
            printf("%s", conteudo);
            printf("\t");
    }

    printf("\n\n");
    system("pause");
}


//fun��o de deletar
int del() {

    setlocale(LC_ALL, "");

    char cpf[40];

    printf("Digite o CPF para exclus�o de dados: ");
    scanf("%s", cpf);

    remove(cpf);

    FILE *file;
    file = fopen(cpf, "r");


    if(file == NULL) {

        printf("\n\nOs dados foram apagados com sucesso!. \n\n");


        system("pause");
    }



}

// fun��o prim�ria (principal)
int main ()
{
    int opcao=0;
    int laco=1;

    for(laco=1;laco=1;)
    {
        setlocale(LC_ALL, "Portuguese_Brazil");

            printf("					++++++++++++++++++++\n");
            printf("					+                  +\n");
            printf("					+ Cart�rio da EBAC +\n");
            printf("					+                  +\n");
            printf("					++++++++++++++++++++\n\n");
            printf("\t1 - Registrar nomes\n");
            printf("\t2 - Consultar nomes\n");
            printf("\t3 - Deletar nomes\n\n");
            printf("Op��o: "); // fim do menu

            scanf("%d", &opcao); // armazene na vari�vel opcao o valor que o usu�rio digitar

        system("cls"); // limpa o terminal

//In�cio da sele��o

		switch (opcao) { // inicio da sele��o

			case 1:
            	reg(); // chamada da fun��o
        	break;

			case 2:
    			cons();
        	break;

			case 3:
            	del();
        	break;

			default:        //caso o usu�rio digite um valor n�o mapeado
            	printf("Esta op��o n�o est� dispon�vel!\n"); //exibe esta mensagem
            	system("pause");
            break;
					}

	}

}
