#include <stdio.h>

int main() {
    int a1, b1, a2, b2, i, j, k;
    printf("Entrez les dimensions de A : ");
    scanf("%d %d", &a1, &b1);
    printf("Entrez les dimensions de B : ");
    scanf("%d %d", &a2, &b2);

    if(b1 != a2){
        printf("Produit impossible: colonnes de A ≠ lignes de B\n");
        return 0;
    }

    int A[a1][b1], B[a2][b2], C[a1][b2];

    printf("Entrez les elements de A:\n");
    for( i=0;i<a1;i++)
        for( j=0;j<b1;j++)
            scanf("%d", &A[i][j]);

    printf("Entrez les elements de B:\n");
    for(i=0;i<a2;i++)
        for(j=0;j<b2;j++)
            scanf("%d", &B[i][j]);

    for(int i=0;i<a1;i++)
        for(j=0;j<b2;j++){
            C[i][j] = 0;
            for( k=0;k<b1;k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    printf("Produit A x B:\n");
    for(i=0;i<a1;i++){
        for(j=0;j<b2;j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}