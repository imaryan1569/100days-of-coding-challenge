#include <stdio.h>
#include <stdlib.h>

void plusMinus(int n, int arr[]) {
    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    printf("%.6f\n", (double)positive / n);
    printf("%.6f\n", (double)negative / n);
    printf("%.6f\n", (double)zero / n);
}

int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    plusMinus(n, arr);

    free(arr);

    return 0;
}