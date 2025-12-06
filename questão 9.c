#include <stdio.h>

int main() {
    int vet[8], tmp;
    for (int i = 0; i < 8; i++) scanf("%d", &vet[i]);
    for (int a = 0; a < 8; a++) {
        for (int b = a + 1; b < 8; b++) {
            if (vet[b] > vet[a]) {
                tmp = vet[a];
                vet[a] = vet[b];
                vet[b] = tmp;
            }
        }
    }
    for (int k = 0; k < 8; k++) printf("%d ", vet[k]);
    return 0;
}
