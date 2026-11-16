#include <stdio.h>

int main() {
    int count;
    printf("How many times to print? ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        printf("%d. Keep coding!\n", i);
    }
    return 0;
}
