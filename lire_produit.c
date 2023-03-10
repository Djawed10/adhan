#include <stdio.h>

int main() {
    int a = 5, b = 7;
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;

    // Open the file for writing
    FILE *fp = fopen("result_produit.txt", "w");
    if (fp == NULL) {
        printf("Error: could not open file\n");
        return 1;
    }

    // Write the results to the file
    fprintf(fp, "a + b = %d\n", sum);
    fprintf(fp, "a - b = %d\n", diff);
    fprintf(fp, "a * b = %d\n", prod);

    // Close the file
    fclose(fp);

    printf("Results written to file '.txt'\n");
    return 0;
}
