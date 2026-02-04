#include <stdio.h>

/* Hafta 9: Obur Algoritmalar (Greedy)
 * Problem: Activity Selection (Etkinlik Seçimi) */

void printMaxActivities(int s[], int f[], int n) {
    int i = 0;
    printf("Secilen Etkinlikler: %d ", i);

    for (int j = 1; j < n; j++) {
        if (s[j] >= f[i]) {
            printf("%d ", j);
            i = j;
        }
    }
}

int main() {
    int start[] = {1, 3, 0, 5, 8, 5};
    int finish[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(start) / sizeof(start[0]);
    printMaxActivities(start, finish, n);
    return 0;
}
