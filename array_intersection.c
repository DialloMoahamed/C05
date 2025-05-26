#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int tab2[n2];
    int tab1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &tab1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &tab2[i]);
    }
    printf("Intersection :");
    for (int i = 0; i < n1; i++)
    {
        int presentDanstab2 = 0;
        for (int j = 0; j < n2; j++)
        {
            if (tab1[i] == tab2[j])
            {
                presentDanstab2 = 1;
                break;
            }
        }
        int déjà_affiché = 0;
        for (int k = 0; k < i; k++)
        {
            if (tab1[i] == tab1[k])
            {
                déjà_affiché = 1;
                break;
            }
        }
        if (presentDanstab2 && !déjà_affiché)
        {
            printf(" %d", tab1[i]);
        }
    }
    printf("\n");
    return 0;
}
