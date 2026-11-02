#include <stdio.h>

int main() {
    int start;
    printf("Enter starting number: ");
    scanf("%d", &start);

    for (int i = start; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
