#include <stdio.h>

int main() {
	void menu();
	
	printf("CALCULADORA EM C\n");
	printf("Operacoes disponiveis\n");
    printf("'+' : soma\n");
    printf("'-' : subtracao\n");
    printf("'*' : multiplicao\n");
    printf("'/' : divisao\n");
    
    printf("\nDigite a expressao na forma: numero1 operador numero2\n");
    printf("Exemplos: 1 + 1 ,  2.1 * 3.1\n");
    printf("Para sair digite: 0\n");

	
	menu();
	
	return 0;
}

void menu() {
	float n1, n2, resultado = 0;
	float soma(float n1, float n2),sub(float n1, float n2),mult(float n1, float n2),div(float n1, float n2);
	char le_valida_operador(),op;
	
	do{
		printf("\nDigite o n1: ");
		scanf("%f", &n1);
		
		if(n1 == 0) {
			printf("Parando calculadora...");
			break;
		}
		
		op = le_valida_operador();
		
		if(op == '0') {
			printf("Parando calculadora...");
			break;
		}
		
		printf("Digite o n2: ");
		scanf("%f", &n2);
		
		if(n2 == 0) {
			printf("Parando calculadora...");
			break;
		}
		
		switch(op) {
			
			case '+' :
				resultado = soma(n1, n2);
				printf("O resultado da soma eh: %.2f\n", resultado);
				break;
				
			case '-' :
				resultado = sub(n1, n2);
				printf("O resultado da subtracao eh: %.2f\n", resultado);
				break;
			
			case '*' :
				resultado = mult(n1, n2);
				printf("O resultado da multiplicacao eh: %.2f\n", resultado);
				break;
				
			case '/' :
				resultado = div(n1, n2);
				printf("O resultado da divisao eh: %.2f\n", resultado);
				break;
		}
		
	}while(n1 != 0 && op != '0' && n2 != 0);
	
	return;
}

float soma(float n1, float n2) {
	float resultado = 0;
	resultado = n1 + n2;
	return resultado;
}

float sub(float n1, float n2) {
	float resultado = 0;
	resultado = n1 - n2;
	return resultado;
}

float mult(float n1, float n2) {
	float resultado = 0;
	resultado = n1 * n2;
	return resultado;
}

float div(float n1, float n2) {
	float resultado = 0;
	resultado = n1 / n2;
	return resultado;
}

char le_valida_operador() {
	char op;
	
	do {
		printf("Digite o operador (+,-,*,/): ");
		scanf(" %c", &op);
		
	}while(op != '+' && op != '-' && op != '*' && op != '/' && op != '0');
	
	return op;
}
