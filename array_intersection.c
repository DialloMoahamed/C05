#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    // Lire la taille du premier tableau
    scanf("%d", &n1);

    // Allouer dynamiquement le premier tableau
    int *tab1 = malloc(n1 * sizeof(int));

    // Remplir le premier tableau
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &tab1[i]);
    }

    // Lire la taille du deuxième tableau
    scanf("%d", &n2);

    // Allouer dynamiquement le deuxième tableau
    int *tab2 = malloc(n2 * sizeof(int));

    // Remplir le deuxième tableau
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &tab2[i]);
    }

    // Affichage du titre (respecter la majuscule et l’espace)
    printf("Intersection :");

    // Parcourir le premier tableau
    for (int i = 0; i < n1; i++)
    {
        int est_dans_tab2 = 0;

        // Chercher si tab1[i] est dans tab2
        for (int j = 0; j < n2; j++)
        {
            if (tab1[i] == tab2[j])
            {
                est_dans_tab2 = 1;
                break;
            }
        }

        // Vérifier si on a déjà affiché ce nombre (doublon)
        int deja_affiche = 0;
        for (int k = 0; k < i; k++)
        {
            if (tab1[k] == tab1[i])
            {
                deja_affiche = 1;
                break;
            }
        }

        // Si c’est dans tab2 et pas encore affiché, on l’affiche
        if (est_dans_tab2 && !deja_affiche)
        {
            printf(" %d", tab1[i]);
        }
    }

    // Retour à la ligne à la fin
    printf("\n");

    // Libérer la mémoire
    free(tab1);
    free(tab2);

    return 0;
}
