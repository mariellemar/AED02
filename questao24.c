#include <stdio.h>

void entradaQ24(float *valorCompra, float *valorPgmnto){
    printf("Questao 24 \n\n");
    printf("Digite o valor da compra: ");
    scanf("%f", valorCompra);
    printf("Digite o valor do pagamento: ");
    scanf("%f", valorPgmnto);
}

void processamentoQ24(float *valorCompra, float *valorPgmnto, int *nota100, int *nota10, int *nota1, float *troco){
    *troco = *valorPgmnto - *valorCompra;
    
    if(*troco < 0){
        printf("Pagamento negado\n");
    } else {
        *nota100 = *troco / 100;
        int resto = (int)*troco % 100;
        *nota10 = resto / 10;
        resto = resto % 10;
        *nota1 = resto;
    }
}

void saidaQ24(int nota100, int nota10, int nota1){
    system("cls");
    printf("Questao 24 \n\n");
    printf("Numero de notas de 100: %d\n", nota100);
    printf("Numero de notas de 10: %d\n", nota10);
    printf("Numero de notas de 1: %d\n", nota1);
}

void questao24(void){
    float valorCompra, valorPgmto, troco;
    int nota100 = 0, nota10 = 0, nota1 = 0;
    
    entradaQ24(&valorCompra, &valorPgmto);
    processamentoQ24(&valorCompra, &valorPgmto, &nota100, &nota10, &nota1, &troco);
    saidaQ24(nota100, nota10, nota1);
}