#include <stdio.h>

int main() {
    int n, i, val;
    int trouve = 0; 

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Entrez les %d elements du tableau :\n", n);
    for (i = 0; i < n; i++) {
        printf("tab[%d] = ", i);
        scanf("%d", &tab[i]);
    }

    printf("Entrez la valeur a rechercher : ");
    scanf("%d", &val);

    for (i = 0; i < n; i++) {
        if (tab[i] == val) {
            trouve = 1;  
            break;       
        }
    }

    if (trouve == 1) {
        printf("\n La valeur %d a ete trouvee a la position %d.\n", val, i+1);
    } else {
        printf("\nLa valeur %d n'existe pas dans le tableau.\n", val);
    }

    return 0;
}