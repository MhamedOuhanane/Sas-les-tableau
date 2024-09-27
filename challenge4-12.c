#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T[100];
    int n,i;
    do
    {
        printf("Donner le nombre d'element du tableau T : ");
        scanf("%d",&n);
    } while (n < 0 || n >= 100);
    if (n == 0)
    {
        printf("Le tableau est vide.");
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            printf("Donner T[%d] = ",i);
            scanf("%d",&T[i]);
        }
        printf("Les nombres paire du tableau est : \n");
        for ( i = 0; i < n; i++)
        {
            if (T[i] % 2 == 0)
            {
                printf("%d\t",T[i]);
            }
        }
        
        
    }
    
    return 0;
}
