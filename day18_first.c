#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 75) {
        printf("Passed with Distinction!\n");
    } else if (marks >= 40) {
        printf("Passed!\n");
    } else {
        printf("Failed.\n");
    }
    return 0;
}
