#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

int main() {
    int compt1, compt2;
    int tableau1[MAX], tableau2[MAX];
    bool deja_affiche[2001] = {false}; 

    scanf("%d", &compt1);
    for (int i = 0; i < compt1; i++) {
        scanf("%d", &tableau1[i]);
    }

    scanf("%d", &compt2);
    for (int i = 0; i < compt2; i++) {
        scanf("%d", &tableau2[i]);
    }

    printf("Intersection :");
    for (int i = 0; i < compt1; i++) {
        for (int j = 0; j < compt2; j++) {
            if (tableau1[i] == tableau2[j]) {
                int val = tableau1[i] + 1000;
                if (!deja_affiche[val]) {
                    printf(" %d", tableau1[i]);
                    deja_affiche[val] = true;
                }
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
