#include<stdio.h>
#include<stdlib.h>
#include "questao20.h"

void entradaQ20(int *num1, int *num2, int *num3){
	printf("Questao 20\n");
	printf("Digite o primeiro valor: ");
	scanf("%d", num1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", num2);
	
	printf("Digite o terceiro valor: ");
	scanf("%d", num3);	
}

void processamentoQ20(int *num1, int *num2, int *num3, int *res){
	
	if (*num1 == *num2 && *num2 == *num3){
		*res = 1;
	}
	else if(*num1 > *num2 && *num1 > *num3){
		
		*res = *num1;
	}
	else if(*n2 > *n1 && *n2 > *n3){
		
		*res = *num2;
	}
	else{
		
		*res = *num3;
	}
}
	
void saidaQ10(int *res){
    system("cls");
	printf("Questao 20\n");
	if(*res == 1){
		printf("Numeros identicos");
	}
	else{
		printf("Maior numero: %d\n", saida);
	}

}

void questao20(void){
	
	int num1, num2, num3, res;
	
	entradaQ20(&num1, &num2, &num3);
	processamentoQ20(&num1, &num2, &num3, &res);
	saidaQ20(res);
}

int main() {
    questao20();
    return 0;
}