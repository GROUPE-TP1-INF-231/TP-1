#include <stdio.h>
#include <stdlib.h>   // pour qsort

// Fonction de comparaison pour qsort
int comparer(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("La taille doit être positive.\n");
        return 1;
    }

    int tab[n];
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    // Tri du tableau en ordre croissant
    qsort(tab, n, sizeof(int), comparer);

    double mediane;
    if (n % 2 == 1) {
        // n impair : l'élément du milieu
        mediane = tab[n / 2];
    } else {
        // n pair : moyenne des deux éléments du milieu
        mediane = (tab[n / 2 - 1] + tab[n / 2]) / 2.0;
    }

    printf("La médiane est : %.2f\n", mediane);
    return 0;
}