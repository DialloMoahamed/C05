#include <stdio.h> // Bibliothèque standard pour l'entrée/sortie

// Ce programme permet de fusionner deux tableau
int main()
{
    int n;

    // Lire la taille du premier tableau
    scanf("%d", &n);

    // Déclaration du premier tableau de taille n
    int tab1[n];

    // Remplir le premier tableau avec n entiers
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab1[i]);
    }

    int m;

    // Lire la taille du deuxième tableau
    scanf("%d", &m);

    // Déclaration du deuxième tableau de taille m
    int tab2[m];

    // Remplir le deuxième tableau avec m entiers
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &tab2[i]);
    }

    // Affichage du tableau fusionné
    printf("Tableau fusionné : ");

    // Afficher tous les éléments du premier tableau
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tab1[i]);
    }

    // Afficher tous les éléments du deuxième tableau
    for (int i = 0; i < m; i++)
    {
        printf("%d ", tab2[i]);
    }

    // Fin du programme
    return 0;
}
