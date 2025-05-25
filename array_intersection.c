#include <stdio.h>
#include <stdbool.h>

int main() {
    int compt1, compt2;

    // Lecture de la taille du premier tableau
    scanf("%d", &compt1);
    int tableau1[compt1];
    for (int i = 0; i < compt1; i++) {
        scanf("%d", &tableau1[i]);
    }

    // Lecture de la taille du deuxième tableau
    scanf("%d", &compt2);
    int tableau2[compt2];
    for (int i = 0; i < compt2; i++) {
        scanf("%d", &tableau2[i]);
    }

    printf("Intersection : ");

    // Pour éviter les doublons dans l'affichage
    bool deja_affiche[1001] = {false}; // Suppose que les valeurs sont entre 0 et 1000

    for (int i = 0; i < compt1; i++) {
        for (int j = 0; j < compt2; j++) {
            if (tableau1[i] == tableau2[j] && !deja_affiche[tableau1[i]]) {
                printf("%d ", tableau1[i]);
                deja_affiche[tableau1[i]] = true;
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
