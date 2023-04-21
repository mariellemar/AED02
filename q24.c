#include <stdio.h>

void entrada(float *valorCompra, float *valorPgmnto){
    printf("Digite o valor da compra: ");
    scanf("%f", valorCompra);
    
    printf("Digite o valor do pagamento: ");
    scanf("%f", valorPgmnto);
}

void processamento(float *valorCompra, float *valorPgmnto, int *nota100, int *nota10, int *nota1, float *troco){
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

void saida(int nota100, int nota10, int nota1){
    printf("Numero de notas de 100: %d\n", nota100);
    printf("Numero de notas de 10: %d\n", nota10);
    printf("Numero de notas de 1: %d\n", nota1);
}

void questao24(void){
    float valorCompra, valorPgmto, troco;
    int nota100 = 0, nota10 = 0, nota1 = 0;
    
    entrada(&valorCompra, &valorPgmto);
    processamento(&valorCompra, &valorPgmto, &nota100, &nota10, &nota1, &troco);
    saida(nota100, nota10, nota1);
}

int main(){
    questao24();
    return 0;
}

