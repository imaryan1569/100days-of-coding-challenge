#include <stdio.h>
#include <stdlib.h>

void miniMaxSum(int arr_count, int* arr) {
    long total_sum = 0;
    for (int i = 0; i < arr_count; i++) {
        total_sum += arr[i];
    }

    long min_sum = total_sum - arr[0];
    long max_sum = total_sum - arr[0];
    
    for (int i = 1; i < arr_count; i++) {
        long current_sum = total_sum - arr[i];
        if (current_sum < min_sum) {
            min_sum = current_sum;
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    printf("%ld %ld\n", min_sum, max_sum);
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    miniMaxSum(5, arr);
    
    return 0;
}