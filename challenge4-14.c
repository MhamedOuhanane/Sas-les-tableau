#include<stdio.h>
int main(int argc, char const *argv[])
{
    int T[100];
    int n, i, s;
    float m;
    do
    {
        printf("Entrer le nombre d'element du tableau : ");
        scanf("%d",&n);
    } while (n < 0 || n >= 100);
    if (n == 0)
    {
        printf("Le tableau est vide .");
    }
    else
    {
       for (size_t i = 0; i < n; i++)
       {
            printf("Entrer T[%d] = ",i); 
            scanf("%d",&T[i]);
       }
        s = 0;
        for ( i = 0; i < n; i++)
        {
            s += T[i];
        }
        m = s/n;
        printf("La moyenne des element de tableau T est : m = %f", m);
    }
    
    
    return 0;
}
