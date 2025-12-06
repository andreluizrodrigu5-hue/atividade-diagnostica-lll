#include <stdio.h>

int main() {
    int a[5], b[5];
    int res = 0;
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    for (int j = 0; j < 5; j++) scanf("%d", &b[j]);
    for (int k = 0; k < 5; k++) res += a[k] * b[k];
    printf("%d", res);
    return 0;
}
