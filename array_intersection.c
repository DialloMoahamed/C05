#include <stdio.h>
#include <stdbool.h>

bool deja_affiche(int tab[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == valeur) {
            return true;
        }
    }
    return false;
}

int main()
{
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

    int inter[n < m ? n : m]; // tableau pour stocker les éléments communs sans doublons
    int taille_inter = 0;

    printf("Intersection :");
    for (int i = 0; i < n; i++) {
        // On vérifie si on a déjà affiché tab1[i]
        if (deja_affiche(inter, taille_inter, tab1[i])) {
            continue; // on passe au suivant si déjà affiché
        }
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                printf(" %d", tab1[i]);
                inter[taille_inter++] = tab1[i];  // on garde en mémoire l'affichage pour éviter doublons
                tab2[j] = -99999; // marquer comme utilisé dans tab2
                break;
            }
        }
    }
    printf("\n");

    return 0;
}
