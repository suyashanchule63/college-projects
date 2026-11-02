#include <stdio.h>

int main() {
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);

    for (int i = 3; i <= limit; i += 3) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
