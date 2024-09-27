#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T[100];
    int i,n,j;
    do
    {
        printf("Entrer le nombre des element du tableau T : ");
        scanf("%d",&n);
    } while (n < 0 || n >= 100);
    if (n == 0)
    {
        printf("Le tableau est vide !!");
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            printf("Saisir T[%d] = ",i);
            scanf("%d",&T[i]);
        }
        for ( i = 0; i < n/2; i++)
        {
            j = T[i];
            T[i] = T[n-1-i];
            T[n-1-i] = j ;
        }
        printf("Affichage de T : T[%d] ={ ",n);
        for ( i = 0; i < n; i++)
        {
            printf("%d, ",T[i]);
        }
        printf("}");
    }
    
    
    return 0;
}
