#include <stdio.h>

int main() {
    int n, i;
    printf("Entrez la taille du tableau: ");
    scanf("%d", &n);

    int arr[n];
    printf("Entrez les elements :\n");
    for( i=0;i<n;i++) 
      scanf("%d", &arr[i]);

    for(i=0;i<n/2;i++){
        int tmp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = tmp;
    }

    printf("Tableau inverse: ");
    for(i=0;i<n;i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}