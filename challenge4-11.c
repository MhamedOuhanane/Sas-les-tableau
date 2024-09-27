#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T[100];
    int a,n,i,j;
    do
    {
        printf("Donner le nombre des element du tableau T : ");
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
        printf("Entrer la valeur a remplace : ");
        scanf("%d",&a);  
        printf("Entrer la nouvelle valeur : ");
        scanf("%d",&j);   
        for ( i = 0; i < n; i++)
        {
            if (T[i] == a)
            {
                T[i] = j;
            }
            
        }
        printf("Affichage de T : T[%d] ={",n);
        for ( i = 0; i < n; i++)
        {
            printf(" %d,",T[i]);
        }
         printf("}");
    }
    
    
    return 0;
}
