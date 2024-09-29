#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T[100];
    int i,n,min;
    do
    {
        printf("Entrer le nombre des element du tableau : ");
        scanf("%d",&n);
    } while (n < 0 || n >= 100);
    if (n == 0)
    {
        printf("Le tableau est vide .");
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            printf("Entrer T[%d] = ",i);
            scanf("%d",&T[i]);
        }
        min = T[0];
        for ( i = 1; i < n; i++)
        {
            if (min > T[i])
            {
                min = T[i];
            }
        }
        printf("Le Minimum des nombre du tableau : min = %d",min);     
    }
    
    
    return 0;
}
