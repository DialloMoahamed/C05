#include <stdio.h>
#include <stdbool.h>

int main() {
    int N1, N2;
    int arr1[100], arr2[100];
    bool seen[1001] = { false }; 
    bool intersection[1001] = { false };

    scanf("%d", &N1);
    for (int i = 0; i < N1; i++) {
        scanf("%d", &arr1[i]);
        seen[arr1[i]] = true;
    }

    scanf("%d", &N2);
    for (int i = 0; i < N2; i++) {
        scanf("%d", &arr2[i]);
        if (seen[arr2[i]]) {
            intersection[arr2[i]] = true; 
        }
    }

    printf("Intersection : ");
    for (int i = 0; i <= 1000; i++) {
        if (intersection[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
