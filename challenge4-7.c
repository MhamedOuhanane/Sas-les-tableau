#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T[100];
    int i ,n , a,j;
    do
    {
        printf("Saisir le nombre d'element du tableau T :");
        scanf("%d",&n);
    } while (n < 0 || n >= 100);
    if (n == 0)
    {
        printf("Le tableau est vide");
    }
    else
    {
        for ( i = 0; i < n; i++)
        {
            printf("Saisir T[%d] = ",i);
            scanf("%d",&T[i]);
        }
        do
        {
            a = 1;
            for ( i = 0; i < n-1; i++)
            {
                if (T[i] > T[i+1])
                {
                    j = T[i];
                    T[i] = T[i+1];
                    T[i+1] = j;
                    a = 0;
                }
                 
            }
            
        } while (a == 0);
        printf("Le tableau T apres le tri est T[%d] ={ ",n);
        for ( i = 0; i < n; i++)
        {
            printf("%d, ",T[i]);
        }
    }
    
    return 0;
}
