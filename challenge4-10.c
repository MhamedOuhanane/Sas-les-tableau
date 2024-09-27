#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T[100];
    int a,i,n,j=0;
    do
    {
        printf("Donner la taille du tableau T : ");
        scanf("%d",&n);
    } while (n < 0 || n >= 100);
    if (n == 0)
    {
        printf("Le tableau T est vide.");
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            printf("Saisir T[%d] = ",i);
            scanf("%d",&T[i]);
        }
        printf("T[%d] ={",n);
        for ( i = 0; i < n ; i++)
        {
            printf("%d,",T[i]);
        }printf("}\n");
        printf("Donner le nombre chercher : ");
        scanf("%d",&a);
        for ( i = 0; i < n; i++)
        {
            if (a == T[i])
            {
                j = 1;
                break;
            }
        }
        if (j == 1)
        {
            printf("Le nombre %d est appartiant au tableau T .",a);
        }
        else
            printf("Le nombre %d est n'appartiant pas au tableau T .",a);
    }

    return 0;
}
