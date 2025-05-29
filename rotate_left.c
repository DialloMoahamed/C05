#include <stdio.h> // Inclusion de la bibliothèque standard pour l'entrée/sortie

// Ce programme effectue une rotation à gauche d'un tableau (le premier élément est déplacé à la fin)
// Fonction principale
int main(int argc, char const *argv[])
{
    int n, el1;

    // Lire la taille du tableau
    scanf("%d", &n);

    // Déclaration du tableau de taille n (VLA = Variable Length Array)
    int tab[n];

    // Lire les éléments du tableau et stocker le premier élément dans el1
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);

        // On enregistre le premier élément pour le remettre à la fin après rotation
        el1 = tab[0];
    }

    // Décalage vers la gauche : chaque élément prend la valeur du suivant
    for (int i = 0; i < n - 1; i++)
    {
        tab[i] = tab[i + 1];
    }

    // Affichage du tableau après rotation
    printf("Tableau après rotation : ");

    // Afficher les n - 1 premiers éléments (qui ont été décalés)
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", tab[i]);
    }

    // Afficher le premier élément (stocké dans el1) à la fin
    printf("%d", el1);

    // Retour de la fonction
    return 0;
}
