#include <stdio.h>

int main() {
    int inicio, fim;
    printf("Digite dois numeros: ");
    scanf("%d%d", &inicio, &fim);
    if (inicio < fim) {
        for (int n = inicio + 1; n < fim; n++) printf("%d ", n);
    } else {
        for (int n = fim + 1; n < inicio; n++) printf("%d ", n);
    }
    return 0;
}
