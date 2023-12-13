#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	char nome[50],nome_cientifico[50];
	int i,j, primeiro_espaco = 0, ultimo_espaco = 0, qntd_espaco = 0;
	
	printf("Nome: ");
	scanf("%[^\n]s",&nome);
	
	for(i=0;i<strlen(nome);i++){
		//printf("%c ",tolower(nome[i]));
		nome[i] = toupper(nome[i]);
	}

	for(i=0;i<strlen(nome);i++){
		if(nome[i]==' '){
			qntd_espaco++;
		}
	}
	
	printf("Nome >> %s\n", nome);	

	strcpy(nome_cientifico,"");

	for(i=0;i<strlen(nome);i++){
		if(nome[i]==' '){
			ultimo_espaco = i;
		}
	}	

	for(i=strlen(nome)-1;i>=0;i--){
		if(nome[i]==' '){
			primeiro_espaco = i;
		}
	}

	printf("primeiro_espaco: %d\n",primeiro_espaco);
	printf("ultimo_espaco: %d\n",ultimo_espaco);

//	for(i=ultimo_espaco+1;i<strlen(nome);i++){
//		printf("%c",toupper(nome[i]));
//	}
	
	j=0;
	for(i=ultimo_espaco+1;i<strlen(nome);i++,j++){
		nome_cientifico[j]=toupper(nome[i]);
		//j++
	}

	strcat(nome_cientifico,", ");

	//printf("j: %d\n",j);

	//j=j+1;
	j=strlen(nome_cientifico);
	nome_cientifico[j]=nome[0];
	strcat(nome_cientifico,". ");
	
	j=strlen(nome_cientifico);
	
	
	printf("nome_cientifico >> %s\n", nome_cientifico);

	return 0;
}

