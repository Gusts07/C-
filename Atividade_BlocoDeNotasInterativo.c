/*Atividade de manipula��o de structs
Menu para intera��o
op��es numericas
cadastrar cliente ou anota��o
op��o de editar o cadastro
mostrar todos os cadastro
excluir o cadastro
Bloco de notas
Adicionar posi��es para achar o bloco*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#ifdef _WIN32
#define clear_code "cls"
#define pause_code "pause"
#else
#endif
#define max_notes 1000
#define max_file_name 250
#define header "********************************************************\n"

struct Note{
char file_name[max_file_name];
char content[1800];
	};
	
int main(){
	setlocale(LC_ALL, "portuguese");
	int i;
	struct Note notes[max_notes];
	int not_number = 0;
	int choise;
//Inicio com cabe�alho para apresentar o programa.

printf("%s", header);
printf("*        Bem-vindo ao Bloco de Notas Interativo!       *\n");
printf("%s", header);
	system(pause_code);
	system(clear_code);

//Em seguida temos a parte de intera��o com o usu�rio

	while (1){
printf("Escolha um n�mero correspondente a sua op��o:\n");
printf("1- Criar nova nota\n");
printf("2- Listar notas\n");
printf("3- Abrir nota\n");
printf("4- Sair\n");
scanf("%d", &choise);

//Usando o camando switch para criar um menu para o usu�rio

	switch (choise) {
	case 1:
//Escolha caso 1: Temos o Cabe�alho com um regra para nome de notas...
printf("%s\n", header);
printf("*   No nome da nota n�o pode conter espa�os e n�meros  *\n");
printf("%s\n", header);

	if (not_number < max_notes){
//If para caso o numero de notas seja menor, ir� executar o seguinte comando:

printf("Digite um nome para a nova nota: ");
//Mostra a mensagem na tela para o usu�rio
	scanf("%249s", notes[not_number].file_name);
//Em seguida l� o nome que o usu�rio utilizar para o nome da nota, com m�ximo de 249 caracteres para garantir

printf("Digite o conte�do:\n");
//O programa faz um pedido para o usu�rio inserir o conte�do da nova nota e executa o programa
		getchar();
		fgets(notes[not_number].content, sizeof(notes[not_number].content), stdin);
			not_number++;
//adiciona na vari�vel o valor de 1 para cada nota criada pelo usu�rio
printf("\nSua nota foi salva com sucesso!!!\n");
//D� o feedback para o usu�rio dizendo que a nota foi salva
	system(pause_code);
	system(clear_code);
//Comando pause para leitura do usu�rio e clear para manter o c�digo limpo
}
//Comando else para caso alcance o m�ximo de notas, informar o usu�rio, adicionei um m�ximo de 1000 notas.
	else{
printf("N�mero m�ximo de notas atingido.\n");
	system(pause_code);
	system(clear_code);
}
	break;
	
//Caso 2:
	case 2:
//Caso 2 serve para mostra a lista, por isso iniciei um printf e logo em seguida um comando de repeti��o
//para mostrar as notas que est�o salvas juntamente com o nome do arquivo e a posi��o
printf("Notas dispon�veis:\n");
		for (i = 0; i < not_number; i++){
printf("%d - %s\n", i + 1, notes[i].file_name);
}
	system(pause_code);
//Comando pause para o usu�rio conseguir ler e saber todas as notas criadas e a posi��o
	break;
	
//Caso 3

	case 3:
//Pedido ao usu�rio usando printf para que seja informado a posi��o da nota 
printf("Digite a posi��o da nota que deseja abrir: ");
	int choisen_note;
//Identificando a vari�vel de escolha
	scanf("%d", &choisen_note);
//Comando scanf para atribuir o valor da posi��o da nota que o usu�rio deseja
	system(clear_code);
//Comando clear para limpar a tela e evitar polui��o visual
	if (choisen_note >= 1 && choisen_note <= not_number) {
printf("Conte�do da nota \"%s\":\n\n%s\n", notes[choisen_note - 1].file_name,
	notes[choisen_note - 1].content);
	system(pause_code);
//Comando para selecionar o arquivo desejado pelo usu�rio e mostrar o conte�do contido dentro da nota
//Comando Pause para leitura do conte�do
}
	else{
printf("Nota n�o encontrada.\n");
	system(pause_code);
//Else com feedback negativo com rela��o a inco�ncia da nota escolhida
}
break;

//Caso 4

	case 4:
//Encerrameto do programa junto com pause para informar a sa�da bem sucedida
printf("Saindo do Bloco de Notas...\n");
	exit(0);
	system(pause_code);
	default:
//Comando printf para mostrar inco�rencia na op��o selecionada fornecida pelo usu�rio
//Pausa para leitura do erro e clear para manter o programa n�o polu�do.
printf("Op��o inv�lida.\n");
	system(pause_code);
	system(clear_code);
}
}
//Comando return - end
	return 0;
}
