#include <stdio.h>
#include <stdlib.h>

/* Hafta 7: Medyanlar ve Sıra İstatistikleri
 * QuickSelect ile k. en küçük elemanı bulma (O(n) ortalama süre) */

void swap(int* a, int* b) { int t = *a; *a = *b; *b = t; }

int partition(int arr[], int l, int r) {
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] <= x) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

int kthSmallest(int arr[], int l, int r, int k) {
    if (k > 0 && k <= r - l + 1) {
        int pos = partition(arr, l, r);
        if (pos - l == k - 1) return arr[pos];
        if (pos - l > k - 1) return kthSmallest(arr, l, pos - 1, k);
        return kthSmallest(arr, pos + 1, r, k - pos + l - 1);
    }
    return -1;
}

int main() {
    int arr[] = {12, 3, 5, 7, 4, 19, 26};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; 
    printf("%d. en kucuk eleman: %d", k, kthSmallest(arr, 0, n - 1, k));
    return 0;
}
