#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TAM_ALFABETO 26
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int rotacao=0, i=0;
	int  le_valida_rotacao();
	char texto[45];
	 
	do{
		printf("Agora informe o texto a ser criptografado (Max 45 caracteres): ");
		scanf("%[^\n]s",&texto);
	}while(strlen(texto) > 45);
	
	rotacao = le_valida_rotacao();
	
	for(i = 0; i < strlen(texto); i++) {
		if(texto[i] != ' '){
			if (texto[i] >= 'a' && texto[i] <= 'z'){ //se ? minuscula
	            texto[i] = (texto[i] + rotacao - 'a') % TAM_ALFABETO + 'a';
			}
			else {
	            texto[i] = (texto[i] + rotacao - 'A') % TAM_ALFABETO + 'A';
			}	
		}
	
	}
	
    printf("String: %s", texto);
	
	return 0;
}

int le_valida_rotacao() {
	int rot = 0;
	
	do{
		printf("Informe o numero de rotacao (Ex: 1 a 5): ");
		scanf("%d",&rot);
		
	}while(rot < 1 || rot > 5);
	
	return rot;
}