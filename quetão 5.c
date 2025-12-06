#include <stdio.h>

int main() {
    int dado, invert = 0;
    printf("Digite um numero: ");
    scanf("%d", &dado);
    while (dado != 0) {
        invert = invert * 10 + (dado % 10);
        dado /= 10;
    }
    printf("%d", invert);
    return 0;
}
