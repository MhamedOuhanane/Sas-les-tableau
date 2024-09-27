#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T[100];
    int n,i,a;
    do
    {
        printf("Entrer le nombre d'elelment de tableau : ");
        scanf("%d",&n);
    } while (n < 0 || n >= 100);
    if (n == 0)
    {
        printf("le tableau est vide ");
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            printf("Saisir T[%d] = ",i);
            scanf("%d",&T[i]);
        }
        printf("Entrer un facteur a = ");
        scanf("%d",&a);
        printf("Affichage : T[%d] ={",n);
        for ( i = 0; i < n; i++)
        {
            printf("%d,",T[i]*a);
        }
        printf("}");
    }
    return 0;
}
