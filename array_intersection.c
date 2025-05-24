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

    printf("Intersection :");

    for (int i = 0; i < n; i++) {
        int comin = 0;
        for (int j = 0; j < m; j++) {
            if (tab1[i] == tab2[j]) {
                comin = 1;
                break;
            }
        }

        if (comin) {
            int dejaAfficher = 0;
            for (int k = 0; k < i; k++) {
                if (tab1[k] == tab1[i]) {
                    dejaAfficher = 1;
                    break;
                }
            }
            if (!dejaAfficher) {
                printf(" %d", tab1[i]);
            }
        }
    }

    printf("\n");
    return 0;
}
