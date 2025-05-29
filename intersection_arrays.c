#include <stdio.h> // Bibliothèque standard pour les entrées/sorties

// Ce programme affiche l’intersection de deux tableaux
int main()
{
    int n;

    // Lire la taille du premier tableau
    scanf("%d", &n);

    // Déclaration du premier tableau de taille n
    int tab1[n];

    // Lire les éléments du premier tableau
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab1[i]);
    }

    int m;

    // Lire la taille du deuxième tableau
    scanf("%d", &m);

    // Déclaration du deuxième tableau de taille m
    int tab2[m];

    // Lire les éléments du deuxième tableau
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &tab2[i]);
    }

    // Affichage du message d’intersection
    printf("Intersection : ");

    // Parcours de chaque élément du premier tableau
    for (int i = 0; i < n; i++)
    {
        // Comparer avec chaque élément du deuxième tableau
        for (int j = 0; j < m; j++)
        {
            if (tab1[i] == tab2[j]) // Si une valeur est présente dans les deux tableaux
            {
                printf("%d ", tab1[i]); // L'afficher
            }
        }
    }

    // Fin de ligne
    printf("\n");

    return 0;
}
