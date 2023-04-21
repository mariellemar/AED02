#include <stdio.h>
#include <stdlib.h>
#include "questao17.h"

void entrada17 (float *valorCompra) {
    printf("Questao 17\n\n");
    printf("Informe o valor da compra:");
    scanf("%f", valorCompra);
}

void processamento17 (float *valorCompra, float *valorVenda) {
    if (*valorCompra < 200.0) {
        *valorVenda = *valorCompra + (*valorCompra * 0.5);
    } else {
        *valorVenda = *valorCompra + (*valorCompra * 0.3);
    }
}

void saida17 (float *valorVenda) {
    printf("Questao 17\n");
    printf("O valor da venda foi: %f", *valorVenda);
}

void questao17(void){
    float valorCompra, valorVenda;

	entrada17(&valorCompra);
	processamento17(&valorCompra, &valorVenda);
	saida17(&valorVenda);
}
