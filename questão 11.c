#include <stdio.h>

int main() {
    int vet[10];
    for (int i = 0; i < 10; i++) scanf("%d", &vet[i]);
    for (int x = 0; x < 10; x++) {
        int cont = 0;
        for (int y = 0; y < 10; y++) {
            if (vet[x] == vet[y]) cont++;
        }
        printf("Valor %d aparece %d vezes\n", vet[x], cont);
    }
    return 0;
}
