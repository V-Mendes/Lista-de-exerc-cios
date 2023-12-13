#include <stdio.h>
#include <stdlib.h>
#include <locale.h>	
#include <string.h>
#include <Windows.h>

#define TAM_CIDADE 18
#define MAX_NOME 45
#define MAX_JOGOS 36

int main(void){
	int op = 0, op_sair = 0,count=0,i=0, j=0, k=0, z=0, x=0, a = 0,sair=0, op_cid=0;
	char nc[28], nome[45];

	typedef struct{
	 // Letras maiusculas
	char nome_cidade[TAM_CIDADE];
		int jogos_id[36];
	}Ficha_da_cidade;

	typedef struct
	{
	char nome[MAX_NOME];
	char nacionalidade[28];
	int idade;

	}Presidente;

	typedef struct 
	{
		int id;
		int valor;
	} Lista_de_jogos;

	setlocale(LC_ALL, "Portuguese");

	Lista_de_jogos jogos[MAX_JOGOS];
	Ficha_da_cidade cidade[9];
	Presidente presidente[1];

	printf("|       CADASTRO DO PRESIDENTE       |\n");
	do{
		if( count!=0 ){
			system("cls");
			printf("ERRO, Resposta invalida \n");
			Sleep(2000);
			system("cls");	
		}
		system("cls");	
		printf("|       CADASTRO DO PRESIDENTE       |\n");
		printf("Nome do presidente: ");
		fflush(stdin);
		scanf("%[^\n]s",&nome);
	
		nome[0] = toupper(nome[0]);
	
		for(k=0;k<strlen(nome);k++){
		if(nome[k]==' '){
			nome[k+1] = toupper(nome[k+1]);
		}
		}
		z = strlen(nome); 
		count++;
	} while ( z >= MAX_NOME);
	strncpy(presidente[0].nome, nome, MAX_NOME);

	count=0;

	do{
		if( count!=0){
		system("cls");
		printf("ERRO, Resposta invalida \n");
		system("cls");	
		}
		system("cls");	
		printf("|       CADASTRO DO PRESIDENTE       |\n");
		printf("Nome do presidente: %s\n", nome);
		fflush(stdin);
		printf("Idade do presidente: ");
		fflush(stdin);
		scanf("%d",&presidente[0].idade);
		count++;

	}while (presidente[0].idade < 30 || presidente[0].idade > 70);

	printf("Nacionalidade do presidente: ");
	fflush(stdin);
	scanf("%[^\n]s",&presidente[0].nacionalidade);

	printf("\n");
	printf("Presindete: %s cadastrado\n",presidente[0].nome);
	system("cls");

	do{	
		system("cls");
		printf("|       MENU       |\n");
	
		printf("\n|1| - PRESIDENTE");
		printf("\n|2| - CADASTRAR CIDADE");
		printf("\n|3| - CADASTRAR JOGO");
		printf("\n|4| - LISTAR JOGOS");
		printf("\n|5| - EXIBIR JOGOS POR CIDADE");
		printf("\n|6| - ENCERRAR\n\n");	
	
		printf("ESCOLHA UMA OPCAO: ");
		scanf("%d", &op);
		printf("\n");
		switch (op)
		{ 
		// Muda o presindente
		case 1:   
		count=0;
		system("cls");
		printf("|       CADASTRO DO PRESIDENTE       |\n");
		do{
			if( count!=0 ){
				system("cls");
				printf("ERRO, Resposta invalida \n");
				Sleep(2000);
				system("cls");	
			}
			system("cls");	
			printf("|       CADASTRO DO PRESIDENTE       |\n");
			printf("Nome do presidente: ");
			fflush(stdin);
			scanf("%[^\n]s",&nome);
		
			nome[0] = toupper(nome[0]);
		
			for(k=0;k<strlen(nome);k++){
				if(nome[k]==' '){
					nome[k+1] = toupper(nome[k+1]);
				}
			}
			z = strlen(nome); 
			count++;
		} while ( z >= MAX_NOME);
		strncpy(presidente[0].nome, nome, MAX_NOME);
	
		count=0;
	
		do{
			if( count!=0){
			system("cls");
			printf("ERRO, Resposta invalida \n");
			Sleep(2000);
			system("cls");	
			}
			system("cls");
			printf("|   CADASTRO DO PRESIDENTE   |\n");
			printf("Nome do presidente: %s\n", nome);
			fflush(stdin);
			printf("Idade do presidente: ");
			fflush(stdin);
			scanf("%d",&presidente[0].idade);
			count++;
	
		}while (presidente[0].idade < 30 || presidente[0].idade > 70);
	
		printf("Nacionalidade: ");
		fflush(stdin);
		scanf("%[^\n]s",&presidente[0].nacionalidade);
	
		printf("\n");
		printf("Presidente: %s cadastrado\n",presidente[0].nome);
		system("cls");
	
		break;
	
		case 2 : 	
		count=0;
		system("cls");
		printf("\t Cadastro da cidade !\n");
		do{
			if(count!=0){
				system("cls");
				printf("ERRO, Resposta invalida\n");
				Sleep(2000);
				system("cls");	
			}
			system("cls");
			printf("\t Cadastro da cidade !\n");
			printf("Nome da cidade: ");
			fflush(stdin);
			scanf("%[^\n]s",&nc);
		
			for ( k = 0; k < strlen(nc); k++)
			{
				nc[k]= toupper(nc[k]);
			}
		
			j = strlen(nc);
			count++;
		} while ( j >= TAM_CIDADE);
		strncpy(cidade[i].nome_cidade, nc, TAM_CIDADE);
		printf("\n");
		printf("'%s' cadastrada\n",cidade[i].nome_cidade);
		i++;
		//  
		system("cls");
	
		break;
		case 3 :
		system("cls");
		printf("\t Cadastro dos jogos !\n");
		count=0;
		do{
			if(count!=0){
				system("cls");
				printf("ERRO, Resposta invalida \n");
				Sleep(2000);
				system("cls");	
			}
			system("cls");
			printf("\t Cadastro dos jogos !\n");
		
			printf("Informe o codigo do jogo: ");
			fflush(stdin);
			scanf("%d",&jogos[x].id);
			count++;
		}while(jogos[x].id < 300 || jogos[x].id > 999 );
	
		count=0;
		do{
			if(count!=0){
				system("cls");
				printf("ERRO, Resposta invalida \n");
				Sleep(2000);
				system("cls");	
			}
			system("cls");
			printf("\t Cadastro dos jogos !\n");
		
			printf("Informe a quantia de arrecadacao: ");
			fflush(stdin);
			scanf("%d",&jogos[x].valor);
			count++;
	
		}while(jogos[x].valor < 1002 || jogos[x].valor > 1000001);
		k=0;
	
		printf("Escolha uma cidade\n");
		if (strlen(cidade) == 1){
			printf("    |%d| %s.\n",1, cidade[0].nome_cidade);
		}else{
			for (k = 0; k < strlen(cidade) - 1; k++){
				printf("    |%d| %s.\n",k+1, cidade[k].nome_cidade);
			};
		}
	
		printf("-----------------------------\n");
		k=0;
	
		printf("Escolha a cidade sede: ");
		fflush(stdin);
		scanf("%d",&k - 1);
	
		cidade[k].jogos_id[x] = jogos[x].id;
	
		printf("%d", cidade[k].jogos_id[x]);
		x++;
		break;
	
		case 4 :
	
		fflush(stdin);
		printf("\t   FIFA - Relatorio de Arrecadacao\n");
		printf("\t\tPresidente: %s\n", presidente[0]);
		printf("COD CIDADE CIDADE");
		printf("\tCOD JOGO");
		printf("\tArecadacao\n");
		printf("------------------------------------------------------\n");
	
		for (k = 0;  k < strlen(jogos) - 1 ; k++){
		printf("%d",k+1);
		fflush(stdin);
		printf("\t   %s ",cidade[k].nome_cidade);
		fflush(stdin);
		printf("\t\t%d",jogos[k].id);
		fflush(stdin);
		printf("\t\t%d\n",jogos[k].valor);
		};
		printf("------------------------------------------------------\n");
	
	
		printf("Deseja sair digite [1]: ");
		fflush(stdin);
		scanf("%d",&sair);
		if(sair == 1){
			break;	
		}
	
		case 5 :
		system("cls");
		printf("    JOGOS POR CIDADE\n");
	
		if (strlen(cidade) == 1){
			printf("    |%d| %s.\n",1, cidade[0].nome_cidade);
		}else{
			for (k = 0; k < strlen(cidade) - 2; k++){
				printf("    |%d| %s.\n",k+1, cidade[k].nome_cidade);
			};
		}
		printf("    |========================|\n");
	
		printf("Escolha a cidade: ");
		fflush(stdin);
		scanf("%d",&op_cid - 1);
	
		system("cls");
		printf("JOGOS DA CIDADE\n");
	
		for (k = 0; k < strlen(cidade[op_cid].jogos_id) - 1; k++, a++){
			printf("    COD: %d.\n", cidade[k].jogos_id[a]);
		};
		printf("    |========================|\n");
		sair=0;
		printf("Deseja sair digite [1]: ");
		fflush(stdin);
		scanf("%d",&sair);
		if(sair == 1){
			break;	
		}
	
		case 6 :
	
		system("cls");
		printf("\t Programa Finalizado !\n");
		printf("\t'-'\n");
		return op_sair=1;
	
		default:
		printf("Opcao Incorreta !");
		system("cls");
		}

	}while(op_sair != 5);

return 0;
}