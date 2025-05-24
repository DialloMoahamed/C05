#include <stdio.h>

int main(void)
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

    int deja[100];
    int taille = 0;

    printf("Intersection : ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                
                int deja_affiche = 0;
                for (int k = 0; k < taille; k++) {
                    if (deja[k] == tab1[i]) {
                        deja_affiche = 1;
                        break;
                    }
                }
                if (!deja_affiche) {
                    printf("%d ", tab1[i]);
                    deja[taille++] = tab1[i];
                }
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
