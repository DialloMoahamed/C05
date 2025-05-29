#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

// Ce programme sert à trouver le minimum dans un tableau d'entiers
int main()
{
    int n;

    // Lire la taille du tableau
    scanf("%d", &n);

    // Déclaration du tableau de taille n (utilisation de VLA : Variable Length Array)
    int tab[n];

    // Remplissage du tableau avec les valeurs entrées par l'utilisateur
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }

    // Initialiser le minimum avec le premier élément du tableau
    int min = tab[0];

    // Parcourir le reste du tableau à partir du 2e élément
    for (int i = 1; i < n; i++)
    {
        // Si un élément est plus petit que le minimum actuel, on le met à jour
        if (tab[i] < min)
        {
            min = tab[i];
        }
    }

    // Afficher le minimum trouvé
    printf("Le minimum est : %d\n", min);

    return 0;
}
