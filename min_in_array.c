#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erreur : la taille du tableau doit être positive.\n");
        return 1;
    }

    int tab[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }

    int min = tab[0];
    for (int i = 1; i < n; i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
        }
    }

    printf("Le minimum est : %d\n", min);
    return 0;
}
