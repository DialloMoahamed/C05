#include <stdio.h>



int main()
{
    int N1, N2, n[100];
    int i, x;

    scanf("%d", &N1);

    for (i = 0; i < N1; i++)
        {
            scanf("%d", &x);

            n[x] = 1;
        }

    scanf("%d", &N2);

    for (i = 0; i < N2; i++)
        {
            scanf("%d", &x);

            n[x] |= 2;
        }

    printf("Intersection : ");

    for (i = 0; i <= 100; i++)
    {
        if (n[i] == 3)
        printf("%d ", i);
    }

    return 0;
}
