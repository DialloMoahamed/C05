#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, occ=0, element;
    scanf("%d", &n);
    int tab[n];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab[i]);
    }
    scanf("%d",&element);
    for (int i = 0; i < n; i++)
    {
        if (element == tab[i])
        {
            occ++;
        }
        
    }
    printf("L'élément %d apparaît %d fois.",element, occ);
    
    
    
    return 0;
}
