#include<stdio.h>
int main()
{
    int T[1000];
    int i,n,max;
    do
    {
        printf("Entrer le nombre d'element du tableau : ");
        scanf("%d",&n);
    } while (n < 0 || n >= 1000);
    if (n == 0)
    {
        printf("Le tableau est vide...");
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            printf("Entrer T[%d] = ",i);
            scanf("%d",&T[i]);
        }
        max = T[0];
        for ( i = 1; i < n; i++)
        {
            if (max < T[i])
            {
                max = T[i];
            }
        }
        printf("Le Maximum des elements du tableau T est max = %d",max);
    }
    
    
    return 0;
}
