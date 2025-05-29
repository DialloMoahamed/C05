#include <stdio.h> // Bibliothèque pour les entrées/sorties

// Ce programme sert à compter combien de fois un élément donné apparaît dans un tableau.
int main(void)
{
    int n, occ = 0, element;

    // Lire la taille du tableau
    scanf("%d", &n);

    // Déclaration du tableau de taille n
    int tab[n];

    // Remplir le tableau avec les valeurs entrées par l'utilisateur
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }

    // Lire l'élément à rechercher dans le tableau
    scanf("%d", &element);

    // Parcourir le tableau pour compter combien de fois l'élément apparaît
    for (int i = 0; i < n; i++)
    {
        if (element == tab[i]) // Si l'élément correspond à tab[i]
        {
            occ++; // On incrémente le compteur d'occurrences
        }
    }

    // Afficher le résultat
    printf("L'élément %d apparaît %d fois.", element, occ);

    return 0;
}
