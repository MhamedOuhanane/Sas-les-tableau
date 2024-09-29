#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T[100];
    int i , n, s = 0;
    do
    {
        printf("Entrer le nobredes element du tableau : ");
        scanf("%d",&n);
    } while (n < 0 || n > 100);
    if (n == 0)
    {
        printf("Le tableau est vide!");
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            printf("Saisir T[%d] = ",i);
            scanf("%d",&T[i]);
        }
        for ( i = 0; i < n; i++)
        {
            s += T[i];
        }
        printf("La somme des nombre du tableau est : s = %d",s);
    }
    
    
    return 0;
}
