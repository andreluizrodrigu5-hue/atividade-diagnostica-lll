#include <stdio.h>

int main() {
    int numero, dig = 0;
    printf("Numero: ");
    scanf("%d", &numero);
    if (numero == 0) dig = 1;
    else {
        while (numero != 0) {
            numero /= 10;
            dig++;
        }
    }
    printf("%d digitos\n", dig);
    return 0;
}
