#include <stdio.h>

int main() {
    int lista[10];
    for (int i = 0; i < 10; i++) scanf("%d", &lista[i]);
    for (int a = 0; a < 10; a++) {
        int achou = 0;
        for (int b = 0; b < 10; b++) {
            if (lista[a] == lista[b] && a != b) achou = 1;
        }
        if (!achou) printf("%d ", lista[a]);
    }
    return 0;
}
