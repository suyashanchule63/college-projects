#include <stdio.h>

int main() {
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);

    for (int i = 2; i <= limit; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
