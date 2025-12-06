#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nums[50];
    srand(time(0));
    for (int i = 0; i < 50; i++) {
        nums[i] = rand() % 20;
        printf("%d ", nums[i]);
    }
    printf("\n");
    for (int x = 0; x < 50; x++) {
        int repetiu = 0;
        for (int y = 0; y < 50; y++) {
            if (nums[x] == nums[y] && x != y) repetiu = 1;
        }
        if (!repetiu) printf("%d ", nums[x]);
    }
    return 0;
}
