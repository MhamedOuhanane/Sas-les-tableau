#include<stdio.h>
int main(int argc, char const *argv[])
{
    float T[100];
    int i,n;
    do
    {
    printf("Donner la taille du tableau : ");
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
            scanf("%f",&T[i]);
        }
        printf("L'affichage :\n T[%d] = {",n);
        for ( i = 0; i < n; i++)
        {
            printf("%f,",T[i]);
        }    
        printf("}");
    }
    return 0;
}
