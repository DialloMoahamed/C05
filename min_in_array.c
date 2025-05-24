#include <stdio.h>
#define MAX 1000

int main()
{
    int n;
    scanf("%d", &n);

    if (n > MAX || n <= 0)
        return 1;

    int tab[MAX];
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
