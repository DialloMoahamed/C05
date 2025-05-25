#include <stdio.h>

int main()
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

    printf("Intersection : ");
    for (int i = 0; i < n; i++) {
        int commun = 0;
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                commun = 1; 
                break;
            }
        }
        if (commun) {
            int dejaAffiche = 0;
            for (int k = 0; k < i; k++) {
                if (tab1[k] == tab1[i]) {
                    dejaAffiche = 1;
                    break;
                }
            }
            if (!dejaAffiche) {
                printf("%d ", tab1[i]);
            }
        }
    }
    printf("\n");
    return 0;
}
