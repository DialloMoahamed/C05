#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Taille du tableau invalide.\n");
        return 1;
    }

    int *tableau = (int *)malloc(n * sizeof(int));
    if (tableau == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    printf("Entrez les éléments du tableau : ");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &tableau[i]) != 1) {
            printf("Erreur lors de la lecture des éléments.\n");
            free(tableau);
            return 1;
        }
    }

    if (n == 0) {
        printf("Le tableau est vide.\n");
    } else {
        int min = tableau[0];
        for (i = 1; i < n; i++) {
            if (tableau[i] < min) {
                min = tableau[i];
            }
        }
        printf("Le minimum est : %d\n", min);
    }

    free(tableau);
    return 0;
}