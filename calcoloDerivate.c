//Calcolo derivate con matrici
#include <stdio.h>

int main (void)
{
    int gradoPol, i, j;
    printf("Inserisci il grado del polinomio: \n");
    scanf("%d", &gradoPol);
    
    int matriceAssociata [gradoPol][gradoPol]; //Matrice Associata alla derivata
    int polinomio[gradoPol];//Polinomio da Derivare
    int derivata[gradoPol];//Derivata
    

    //Calcolo della Matrice Associata
    for (i = 0; i <= gradoPol; i++)
    {
        for (j = 0; j <= gradoPol; j++)
        {
            if (j == i)
                matriceAssociata[j][i] = j;
            else
                matriceAssociata[j][i] = 0;
        }
    }
   
    //Stampa della Matrice Associata
    printf("\nLa Matrice Associata è: \n");
    for (i = 0; i <= gradoPol; i++)
    {
        for (j = 0; j <= gradoPol; j++)
        {
            printf("%d\t", matriceAssociata[j][i]);
        }
        printf("\n");
    }
    
    //Polinomio ca Derivare
    for (i = 0; i <= gradoPol; i++)
    {
        printf("\nInserisci il coefficiente di x^%d: \t", i);
        scanf("%d", &polinomio[i]);
    }
    
    //Stampa del Polinomio
    printf("\nIl polinomio è: \n");
    for (i = gradoPol; i >= 0; i--)
    {
        if (polinomio[i] != 0)
        {
            if (i == 0)
                printf("(%d)\n", polinomio[i]);
            else
                printf("(%dx^%d) + ", polinomio[i], i);
        }
    }
    printf("\n");
    
    //Calcolo Derivata
    for (i = 0; i <= gradoPol; i++) {
        derivata[i] = 0;
    }
    for (i = 0; i <= gradoPol; i++)
    {
        for (j = 0; j <= gradoPol; j++)
            derivata[i] = derivata[i] + matriceAssociata[j][i] * polinomio[i];
    }
    
    //Stampa della Derivata
    printf("La derivata è: \n");
    for (i = gradoPol; i >= 1; i--)
    {
        if (derivata[i] != 0)
        {
            if (i - 1 == 0)
                printf("(%d)\n", derivata[i]);
            else
                printf("(%dx^%d) + ", derivata[i], i - 1);
        }
    }
}


