#include <stdio.h>

int binarySearch(int arr[], int size, int target, int *iterations) {
    int left = 0;
    int right = size - 1;
    *iterations = 0;

    while (left <= right) {
        (*iterations)++;
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
 
int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    scanf("%d", &target);
    int iterations;

    int result = binarySearch(arr, size, target, &iterations);

    if (result != -1) {
        printf("Element %d gefunden an Index %d in %d Iterationen\n", target, result, iterations);
    } else {
        printf("Element %d nicht gefunden\n", target);
    }

    return 0;
}