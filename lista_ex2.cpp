#include <stdio.h>
#include <stdlib.h>

int le_valida_ano();

int main() {
	char razaos[34], nome[34], endereco[40], dddcom[2], dddcel[2], numero[5], datanasc[10], cep[9], cpf[14], telefone[11], cnpj[15], insestad[10], desej[3], contatopj[15], data[10], insmunicip[10], cnae[10], telefonecom[11], telefonecom2[11], complemento[25], bairro[25], estado[2], cidade[15], email[30], placa[7], modelo[15], cor[10];

	
	printf("PREENCHA O FORMULARIO");
	printf("\nDADOS DO CREDENCIADO");
	printf("\nRazao Social e Nome Completo:\n");
	scanf(" %[^\n]s",&razaos);
	
	fflush(stdin);
	
	scanf(" %[^\n]s", &nome);
	
	fflush(stdin);
	
	printf("Endereco: ");
	scanf(" %[^\n]s", &endereco);
	
	fflush(stdin); 
	
	printf("Numero: ");
	scanf(" %s", &numero);
	
	fflush(stdin);
	
	printf("Complemento: ");
	scanf(" %[^\n]s", &complemento);
	
	fflush(stdin);
	
	printf("Bairro: ");
	scanf(" %[^\n]s", &bairro);
	
	fflush(stdin);
	
	printf("CEP: ");
	scanf(" %s", &cep);
	
	fflush(stdin);
	
	printf("Estado: ");
	scanf(" %s", &estado);
	
	fflush(stdin);
	
	printf("Cidade: ");
	scanf(" %[^\n]s", &cidade);
	
	fflush(stdin);
	
	printf("DDD: ");
	scanf(" %s", &dddcom);
	
	fflush(stdin);
	
	printf("Telefone Residencial ou Comercial: ");
	scanf(" %s", &telefonecom);
	
	fflush(stdin);
	
	printf("DDD: ");
	scanf("%s", &dddcel);
	
	fflush(stdin);
	
	printf("Telefone Celular: ");
	scanf(" %s", &telefone);
	
	fflush(stdin);
	
	printf("CPF: ");
	scanf(" %s", &cpf);
	
	fflush(stdin);
	
	printf("CNPJ: ");
	scanf(" %s", &cnpj);
	
	fflush(stdin);
	
	printf("Insc. Estadual: ");
	scanf(" %s", &insestad);
	
	fflush(stdin);
	
	printf("Insc. Municipal: ");
	scanf(" %s", &insmunicip);
	
	fflush(stdin);
	
	printf("CNAE: ");
	scanf(" %s", &cnae);
	
	fflush(stdin);
	
	printf("Data de Nascimento: ");
	scanf("%[^\n]s", &datanasc);
	
	fflush(stdin);
	
	printf("Deseja receber os proximos boletos por email?");
	scanf(" %s", &desej);
	
	fflush(stdin);
	
	printf("E-mail: ");
	scanf(" %[^\n]s", &email);
	
	fflush(stdin);
	
	printf("Contato do Responsavel (em caso de Pessoa Juridica): ");
	scanf(" %s", &contatopj);
	
	fflush(stdin);
	
	printf("Telefone Comercial: ");
	scanf(" %s", &telefonecom2);
	
	fflush(stdin);
	
	printf("Data: ");
	scanf(" %[^\n]s", &data);
	
	fflush(stdin);
	
	printf("DADOS DOS VEICULOS\n");
	printf("Placa: ");
	scanf(" %s", &placa);
	
	fflush(stdin);
	
	printf("Modelo: ");
	scanf(" %s", &modelo);
	
	fflush(stdin);
	
	printf("Ano: ");
	int ano = le_valida_ano();	
	
	fflush(stdin);
	
	printf("Cor: ");
	scanf(" %s", &cor);
	
	printf("=======================================================================================\n");
	printf("                           DADOS INFORMADOS DO CREDENCIADO\n");
	printf("=======================================================================================\n");
	
	printf("Razao Social e Nome Completo:\n %s\n %s", razaos, nome);	
	
	printf("\n\nEndereco: \n %s", endereco);
	
	printf("\n\nNumero:\t\t\t\tComplemento:\t\t\t\t\tBairro:");
	printf("\n%s", numero);
	printf("\t\t\t\t\t%s", complemento);
	printf("\t\t\t\t\t%s", bairro);
	
	printf("\n\nCEP:\t\t\t\t\tEstado:\t\t\t\t\tCidade:");
	printf("\n%s", cep);
	printf("\t\t\t\t\t%s", estado);
	printf("\t\t\t\t\t%s", cidade);
	
	printf("\n\nDDD\t\tTelefone Residencial ou Comercial:\t\tDDD\t\t\tTelefone Celular:");
	printf("\n%s", dddcom);
	printf("\t\t\t%s", telefonecom);
	printf("\t\t\t\t\t%s", dddcel);
	printf("\t\t\t\t%s", telefone);
	
	printf("\n\nCPF:\t\t\t\t\t\tCNPJ:");
	printf("\n%s", cpf);
	printf("\t\t\t\t\t\t%s", cnpj);
	
	printf("\n\nInsc. Estadual: (Preenchimento exclusivo para PJ)\t\tInsc. Municipal: (Preenchimento exclusivo para PJ)");
	printf("\n%s", insestad);
	printf("\t\t\t\t\t\t\t\t\t%s", insmunicip);
	
	printf("\n\nCNAE: (Preenchimento exclusivo para PJ)\t\tData de Nasc.:\t\tDeseja receber os proximos boletos por e-mail?");
	printf("\n%s", cnae);
	printf("\t\t\t\t\t\t%s", datanasc);
	printf("\t\t\t\t\t\t\t%s", desej);
	
	printf("\n\nE-mail:");
	printf("\n%s", email);
	
	printf("\n\nContato do Responsavel (em caso de Pessoa Juridica)\t\t\t\tTelefone Comercial:");
	printf("\n%s", contatopj);
	printf("\t\t\t\t\t\t\t\t\t\t\t%s", telefonecom2);
	
	printf("\n\nData:");
	printf("\n%s", data);
	
	printf("\n\n\nDADOS DOS VEICULOS");
	printf("\nPlaca:\t\t\tModelo:\t\t\tAno:\t\t\tCor");
	printf("\n%s", placa);
	printf("\t\t\t%s", modelo);
	printf("\t\t\t%d", ano);
	printf("\t\t\t%s", cor);
	
	return 0;
}

int le_valida_ano(){
	int contador = 0;
	int ano = 0;
	
    do{
        if(contador!=0){
            printf("Erro: Informe um ano v?lido entre 1903 e 2023: ");  
        }
		scanf(" %d", &ano);
        contador++;
        
    }while(ano < 1903 || ano > 2023);

	return ano;
}