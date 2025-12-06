#include <stdio.h>

int main() {
    int qtd, valor, somaPar = 0, somaImpar = 0;
    printf("Quantidade: ");
    scanf("%d", &qtd);
    for (int t = 0; t < qtd; t++) {
        scanf("%d", &valor);
        if (valor % 2 == 0) somaPar += valor;
        else somaImpar += valor;
    }
    printf("Pares: %d\nImpares: %d\n", somaPar, somaImpar);
    return 0;
}
