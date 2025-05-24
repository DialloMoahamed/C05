#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    int tab1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);
    }

    scanf("%d", &m);
    int tab2[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &tab2[i]);
    }

    printf("Intersection :");
    for (int i = 0; i < n; i++) {
        // Vérifier si tab1[i] est dans tab2
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                found = 1;
                break;
            }
        }

        // Vérifier si tab1[i] n’a pas déjà été affiché
        int deja_affiche = 0;
        for (int k = 0; k < i; k++) {
            if (tab1[i] == tab1[k]) {
                deja_affiche = 1;
                break;
            }
        }

        if (found && !deja_affiche) {
            printf(" %d", tab1[i]);
        }
    }

    printf("\n");
    return 0;
}
