#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int tab1[n] ;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &tab1[i]);
        // count1[i] = tab1[i];
    }
    int m;
    scanf("%d", &m);
    int tab2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &tab2[i]);
        // count2[i] = tab2[i]
    }
    printf("Tableau fusionné : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tab1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ", tab2[i]);
    }
    
    return 0;
}
