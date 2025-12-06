#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[100];
    int qtdV = 0, qtdC = 0;
    printf("Digite uma palavra: ");
    scanf("%s", texto);
    for (int k = 0; k < strlen(texto); k++) {
        char x = tolower(texto[k]);
        if (isalpha(x)) {
            if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u') qtdV++;
            else qtdC++;
        }
    }
    printf("Vogais: %d\nConsoantes: %d\n", qtdV, qtdC);
    return 0;
}
