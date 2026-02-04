#include <stdio.h>
#include <time.h>

/* Hafta 3: Eklemeli Sıralama (Insertion Sort)
 * Karmaşıklık: O(n^2) */

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Siralanmis Dizi: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    return 0;
}
