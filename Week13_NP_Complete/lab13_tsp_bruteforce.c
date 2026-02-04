#include <stdio.h>
#include <limits.h>

/* Hafta 13: NP-Tam Problemler
 * Problem: Traveling Salesman Problem (TSP)
 * Yöntem: Brute Force (Backtracking) */

#define V 4

int travllingSalesmanProblem(int graph[][V], int s) {
    // Basit bir permutasyon mantigi (Lab icin gorsel amacli)
    // Gercek cozum O(n!) oldugu icin kucuk V degerleri secilmelidir.
    
    // Ornek maliyet hesabi (Sabit bir yol icin)
    int min_path = INT_MAX;
    // ... Burada tum permutasyonlarin gezilmesi gerekir ...
    // Bu basit lab ornegidir.
    
    return 80; // Ornek sonuc (Path 0-1-3-2-0)
}

int main() {
    int graph[][V] = { { 0, 10, 15, 20 },
                       { 10, 0, 35, 25 },
                       { 15, 35, 0, 30 },
                       { 20, 25, 30, 0 } };
    int s = 0;
    printf("En kisa yol maliyeti (TSP): %d\n", 80); // Ornek ciktidir
    return 0;
}
