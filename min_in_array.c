#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    int tab[n];
    int min = tab[0];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
        }
        
    }
    printf("Le minimum est : %d", min);
    
    
    return 0;
}
