#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T[100] , A[100];
    int i,n;
    do
    {
        printf("Donner la taille de T : ");
        scanf("%d",&n);
    } while (n < 0 || n >= 100 );
    if (n == 0)
    {
        printf("Le tableau T est vide");
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            printf("Saisir l'element T[%d] = ",i);
            scanf("%d",&T[i]);
        }
        printf("Affichage de T : T[%d] ={",n);
        for ( i = 0; i < n; i++)
        {
            printf("%d, ",T[i]);
            A[i] = T[i];
        }
        printf("}\n");
        printf("Affichage de A : A[%d] ={",n);
        for ( i = 0; i < n; i++)
        {
            printf("%d, ",A[i]);
        }
        printf("}");
    }   
    return 0;
}
