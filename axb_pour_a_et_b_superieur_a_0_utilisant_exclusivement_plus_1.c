#include <stdio.h>

int main() {
    int a, b, produit = 0;

    printf("Entrez a: ");
    scanf("%d", &a);

    printf("Entrez b : ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++) {
        produit += a; {
    }
    }

    printf("\nLe produit de %d et %d est : %d\n", a, b, produit);

    return 0;
}