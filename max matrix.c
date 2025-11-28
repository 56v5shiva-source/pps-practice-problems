#include <stdio.h>

int main() {
    int a[3][5];
    int i, j, max;

    // Input values for the 2D array
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("Enter the element for row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // Initialize max to the first element
    max = a[0][0];

    // Display the elements of the matrix and find the max element
    printf("Elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%5d", a[i][j]);
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
        printf("\n");
    }

    // Print the maximum element
    printf("The maximum element of the matrix is: %d\n", max);

    return 0;
}
