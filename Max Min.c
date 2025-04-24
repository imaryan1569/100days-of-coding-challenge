#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int maxMin(int k, int arr[], int n) {
    qsort(arr, n, sizeof(int), compare);

    int min_u = arr[k - 1] - arr[0];
    for (int i = 1; i <= n - k; i++) {
        int un = arr[i + k - 1] - arr[i];
        if (un < min_u) {
            min_u = un;
        }
    }
    return min_u;
}

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = maxMin(k, arr, n);
    printf("%d\n", result);

    return 0;
}