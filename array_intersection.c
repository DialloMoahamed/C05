#include <stdio.h>
#include <stdlib.h>

int is_in_array(int *arr, int size, int val) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == val) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int *tab1 = malloc(n1 * sizeof(int));
    for (int i = 0; i < n1; i++) {
        scanf("%d", &tab1[i]);
    }

    scanf("%d", &n2);
    int *tab2 = malloc(n2 * sizeof(int));
    for (int i = 0; i < n2; i++) {
        scanf("%d", &tab2[i]);
    }

    int result[n1 < n2 ? n1 : n2];
    int res_size = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (tab1[i] == tab2[j] && !is_in_array(result, res_size, tab1[i])) {
                result[res_size++] = tab1[i];
            }
        }
    }

    printf("Intersection :");
    for (int i = 0; i < res_size; i++) {
        printf(" %d", result[i]);
    }
    printf("\n");

    free(tab1);
    free(tab2);
    return 0;
}
