/*Atividade de manipulação de structs
Menu para interaçâo
opções numericas
cadastrar cliente ou anotação
opção de editar o cadastro
mostrar todos os cadastro
excluir o cadastro
Bloco de notas
Adicionar posições para achar o bloco
Usar comando go to, para controle*/

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
//Inicio com cabeçalho para apresentar o programa.

printf("%s", header);
printf("*        Bem-vindo ao Bloco de Notas Interativo!       *\n");
printf("%s", header);
	system(pause_code);
	system(clear_code);

//Em seguida temos a parte de interaçõo com o usuário

	while (1){
printf("Escolha um número correspondente a sua opção:\n");
printf("1- Criar nova nota\n");
printf("2- Listar notas\n");
printf("3- Abrir nota\n");
printf("4- Sair\n");
scanf("%d", &choise);

//Usando o camando switch para criar um menu para o usuário

	switch (choise) {
	case 1:
//Escolha caso 1: Temos o Cabeçalho com um regra para nome de notas...
printf("%s\n", header);
printf("*   No nome da nota não pode conter espaços e números  *\n");
printf("%s\n", header);

	if (not_number < max_notes){
//If para caso o numero de notas seja menor, irá executar o seguinte comando:

printf("Digite um nome para a nova nota: ");
//Mostra a mensagem na tela para o usuário
	scanf("%249s", notes[not_number].file_name);
//Em seguida lê o nome que o usuário utilizar para o nome da nota, com máximo de 249 caracteres para garantir

printf("Digite o conteúdo:\n");
//O programa faz um pedido para o usuário inserir o conteúdo da nova nota e executa o programa
		getchar();
		fgets(notes[not_number].content, sizeof(notes[not_number].content), stdin);
			not_number++;
//adiciona na variável o valor de 1 para cada nota criada pelo usuário
printf("\nSua nota foi salva com sucesso!!!\n");
//Dá o feedback para o usuário dizendo que a nota foi salva
	system(pause_code);
	system(clear_code);
//Comando pause para leitura do usuário e clear para manter o código limpo
}
//Comando else para caso alcance o máximo de notas, informar o usuário, adicionei um máximo de 1000 notas.
	else{
printf("Número máximo de notas atingido.\n");
	system(pause_code);
	system(clear_code);
}
	break;
	
//Caso 2:
	case 2:
//Caso 2 serve para mostra a lista, por isso iniciei um printf e logo em seguida um comando de repetição
//para mostrar as notas que estão salvas juntamente com o nome do arquivo e a posição
printf("Notas disponíveis:\n");
		for (i = 0; i < not_number; i++){
printf("%d - %s\n", i + 1, notes[i].file_name);
}
	system(pause_code);
//Comando pause para o usuário conseguir ler e saber todas as notas criadas e a posição
	break;
	
//Caso 3

	case 3:
//Pedido ao usuário usando printf para que seja informado a posição da nota 
printf("Digite a posição da nota que deseja abrir: ");
	int choisen_note;
//Identificando a variável de escolha
	scanf("%d", &choisen_note);
//Comando scanf para atribuir o valor da posição da nota que o usuário deseja
	system(clear_code);
//Comando clear para limpar a tela e evitar poluição visual
	if (choisen_note >= 1 && choisen_note <= not_number) {
printf("Conteúdo da nota \"%s\":\n\n%s\n", notes[choisen_note - 1].file_name,
	notes[choisen_note - 1].content);
	system(pause_code);
//Comando para selecionar o arquivo desejado pelo usuário e mostrar o conteúdo contido dentro da nota
//Comando Pause para leitura do conteúdo
}
	else{
printf("Nota não encontrada.\n");
	system(pause_code);
//Else com feedback negativo com relação a incoência da nota escolhida
}
break;

//Caso 4

	case 4:
//Encerrameto do programa junto com pause para informar a saída bem sucedida
printf("Saindo do Bloco de Notas...\n");
	exit(0);
	system(pause_code);
	default:
//Comando printf para mostrar incoêrencia na opção selecionada fornecida pelo usuário
//Pausa para leitura do erro e clear para manter o programa não poluído.
printf("Opção inválida.\n");
	system(pause_code);
	system(clear_code);
}
}
//Comando return - end
	return 0;
}
