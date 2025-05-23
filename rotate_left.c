#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n,el1;
    scanf("%d", &n);
    int tab[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
        el1 = tab[0];
    }
    for (int i = 0; i < n-1; i++)
    {
        tab[i] = tab[i+1];
    }
    printf("Tableau après rotation : ");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("%d", el1);
    
    
    return 0;
}
