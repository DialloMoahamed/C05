#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int tab1[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab1[i]);
    }

    int m;
    scanf("%d", &m);
    int tab2[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &tab2[i]);
    }

    int inter[n < m ? n : m];
    int taille_inter = 0;

    printf("Intersection :");

    for (int i = 0; i < n; i++) {
        // Vérifier si tab1[i] a déjà été affiché (dans inter)
        int deja_affiche = 0;
        for (int k = 0; k < taille_inter; k++) {
            if (inter[k] == tab1[i]) {
                deja_affiche = 1;
                break;
            }
        }
        if (deja_affiche) {
            continue; // on ignore cet élément car déjà affiché
        }

        // Chercher tab1[i] dans tab2
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                // On affiche et on stocke pour ne pas répéter
                printf(" %d", tab1[i]);
                inter[taille_inter++] = tab1[i];
                // Marquer tab2[j] comme utilisé
                tab2[j] = -99999;
                break;
            }
        }
    }

    printf("\n");

    return 0;
}
