#include <stdio.h>

int main() {
    int dados[10], posMax = 0, posMin = 0;
    int maior, menor;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &dados[i]);
        if (i == 0) {
            maior = dados[i];
            menor = dados[i];
        }
        if (dados[i] > maior) { maior = dados[i]; posMax = i; }
        if (dados[i] < menor) { menor = dados[i]; posMin = i; }
    }
    printf("Indice maior: %d\nIndice menor: %d\n", posMax, posMin);
    return 0;
}
