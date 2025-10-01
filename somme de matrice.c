#include <stdio.h>

int main() {
    int a, b, i, j;
    printf("Entrez le nombre de lignes et colonnes: ");
    scanf("%d %d", &a, &b);

    int A[a][b], B[a][b], C[a][b];

    printf("Entrez les elements de la matrice A:\n");
    for( i=0;i<a;i++)
        for( j=0;j<b;j++)
            scanf("%d", &A[i][j]);

    printf("Entrez les elements de la matrice B:\n");
    for( i=0;i<a;i++)
        for(j=0;j<b;j++)
            scanf("%d", &B[i][j]);

    for( i=0;i<a;i++)
        for(j=0;j<b;j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Somme des matrices:\n");
    for( i=0;i<a;i++){
        for( j=0;j<b;j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}