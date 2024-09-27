#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T[100] ,P[100],Q[100];
    int n,m,i;
    do
    {
        printf("Donner le nombre d'element du T : ");
        scanf("%d",&n);
    } while (n < 0 || n >= 100);
    do
    {
        printf("Donner le nombre d'element du P : ");
        scanf("%d",&m);
    } while (m < 0 || m >= 100);   
    if (n == 0 && m == 0)
    {
        printf("Les tableaux sont vide.");
    }
    else
    {
        printf("Saisir les element de T :\n");
        for ( i = 0; i < n; i++)
        {
            printf("T[%d] = ",i);
            scanf("%d",&T[i]);
        }
        printf("Saisir les element de P :\n");
        for ( i = 0; i < n; i++)
        {
            printf("P[%d] = ",i);
            scanf("%d",&P[i]);
        }        
        for ( i = 0; i < n+m; i++)
        {
            if (i < n)
            {
                Q[i] = T[i];
            }
            else
            {
                Q[i] = P[i-n];
            }
        }
        printf("La fusion de T et P est Q[%d] ={",n+m);
        for ( i = 0; i < n+m; i++)
        {
             printf("%d, ",Q[i]);
        }
        printf("}");
        
    }
    
     
    return 0;
}
