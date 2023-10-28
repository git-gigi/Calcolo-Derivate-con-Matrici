//  main.c
//  C - Università
//
//  Created by Luigi Meola on 06/10/23.
//


//somma di due numeri interi
/*
#include <stdio.h>

int main (void)
{
    int integer1, integer2;
    
    printf("Inserisci numero intero:\a");
    scanf( "%d", &integer1);
    
    printf("Inserisci un altro intero:\a");
    scanf( "%d", &integer2);
    
    int sum = integer1 + integer2;
    
    printf("La somma è %d\n", sum);
}*/


//2.19 pagina 84
/*
    #include <stdio.h>

    int main (void)
    {
        int num1, num2, num3;
        
        printf("Enter three different integers:\n");
        scanf("%d %d %d", &num1, &num2, &num3);
        
        int sum = num1 + num2 + num3;
        int averege = (num1 + num2 + num3)/3;
        int product = num1 * num2 * num3;
        
        printf("Sum is %d\n", sum);
        printf("Averege is %d\n", averege);
        printf("Product is %d\n", product);
        
        if (num1 >= num2) {
            if (num1 >= num3) {
                printf("Largest is %d\n", num1);
            }
        }
        
        if (num2 >= num1){
            if (num2 >= num3) {
                printf("Largest is %d\n", num2);
            }
        }
       
        if (num3 >= num1) {
                if (num3 >= num2) {
                    printf("Largest is %d\n", num3);
                }
        }
        
        if (num1 <= num2 <= num3) {
            printf("Smallest is %d\n", num1);
        }
        
        if (num2 <= num3 <= num1 ) {
            printf("Smallest is %d\n", num2);
        }
        
        if (num3 <= num1 <= num2) {
            printf("Smallest is %d\n", num3);
        }
        return 0;
    }

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main (void) {
    
    int voto;
    printf("Inserisci il tuo voto\n");
    scanf("%d", &voto );
    if (voto >= 66 ) {
        puts("Success");
    } else {
        puts("Failed");
    }
        
}


#include <stdio.h>

int main (void) {
    
    int counter = 1;
    int grade;
    int total = 0;
    int averege;
    
    while (counter <= 10) {
        printf("%s","Inserisci un il tuo voto:\n");
        scanf("%d", &grade);
        total = total + grade;
        counter++
        ;
    }
    
    averege = total / 10;
    
    printf ("La media è stata: %d\n", averege);
}



Esercizio 3.36
#include <stdio.h>

int main (void){
    
    int i = 1;
    int totale = 0;
    int c = 1;
    
    while (i <= 1000000000) {
        i++;
        if (i == c * 100000000) {
            printf("Multiplo di 100000000\n");
            c++;
        }
    }
}



#include <stdio.h>

int main (void)
{
    int i;
    for ( i=1 ; i<=100 ; i++) {
        printf("%d\n", i);
        
    }
    
}

#include <stdio.h>

int main (void)
{
    int spesaF, spesaC, spesaE, quota, totale;
    spesaF = 900 + 500 + 120;
    spesaC = 800 + 500 + 120;
    spesaE = 1300 + 600 + 120;
//punto a
    printf("La spesa di Federico è %d \n", spesaF);
    printf("La spesa di Carlo è %d \n", spesaC);
    printf("La spesa di Eugenio è %d \n", spesaE);
    
//punto b
    printf("La spesa in Euro di Federico è %d.%d\n", spesaF/100, spesaF%100 );
    printf("La spesa in Euro di Carlo è %d.%d\n", spesaC/100, spesaC%100 );
    printf("La spesa in Euro di Eugenio è %d.%d\n", spesaE/100, spesaE%100 );
//punto c
    totale = spesaF + spesaC + spesaE;
    printf("La quota esatta è %f \n", totale/3.0 );
    
    quota = totale/3;
    printf("Quote arrotondate:\n");
    printf("Carlo: %d.%d\n", quota/100, quota%100);
    printf("Eugenio: %d.%d\n", quota/100, quota%100);
    printf("Federico: %d.%d\n", (totale-2*quota)/100, (totale-2*quota)%100);
    return 0;
    
}


#include <stdio.h>

int main (void)
{
    float v1, v2, v3, v4;
    scanf("%f %f %f %f", &v1, &v2, &v3, &v4);
    
    if  (0.0 <= v1 && v1 <= 10.0 && 0.0 <= v2 && v2 <= 10.0 && 0.0 <= v3 && v3 <= 10.0 && 0.0 <= v4 && v4 <= 10.0)
    {
        if (v1 > v2 && v1 > v3 && v1 >v4)
            printf("La media dei voti è:\n %f\n", (v2 + v3 +v4)/3.0F);
        else if (v2 > v1 && v2 > v3 && v2 > v4)
            printf("La media dei voti è:\n %f\n", (v1 + v3 +v4)/3.0F);
        else if (v3 > v1 && v3 > v2 && v3 > v4)
            printf("La media dei voti è:\n %f\n", (v2 + v1 +v4)/3.0F);
        else if (v4 > v1 && v4 > v2 && v4 > v3)
            printf("La media dei voti è:\n %f\n", (v2 + v3 +v1)/3.0F);
    }
    return 0;
}


// fattoriale di un numero
#include <stdio.h>

int main (void)
{
    int num;
    scanf("%d", &num);
    int i;
    int fattoriale = 1;
    for (i = 2; i <= num; i++ )
        fattoriale = fattoriale * i;
    printf("Il fattoriale è: %d\n", fattoriale);
    return 0;
}

// area cerchio
#define PIGRECO 3.14F
#include <stdio.h>

int main (void)
{
    float raggio, areaCerchio;
    scanf("%f", &raggio);
    areaCerchio = raggio * raggio *PIGRECO;
    printf("%f", areaCerchio);
}

//somma numeri da 1 a N
#include <stdio.h>

int somma(int n)
{
    int sum = 0;
    if(n > 0)
        sum = sum + n + somma(n - 1);
    return sum;
}

int main (void)
{
    printf("%d", somma(3));
}


//tavola pitagorica
#include <stdio.h>

int main (void)
{
    int i, j, num;
    printf("Inserire un numero intero positivo:\n");
    scanf("%d", &num);
    printf("La tavola Pitagorica è:\n");
    
    if (num >= 0)
        for (i=1; i <= num; i++)
            for (j=1; j <= num; j++ )
                if (j == num)
                    printf("%d\n", i * j);
                else
                    printf("%d\t", i * j);
    else
        printf("Inserire un numero intero positivo:\n");
}


#include <stdio.h>

int main (void)
{
    char c = 'a';
    printf("Inserisci carattere:\n");
    scanf("%c", &c);
    
    while (c != 0) {
        if ('a' <= c && c <= 'z')
        {
            printf("%c e %d", c, c);
            printf("Inserisci un nuovo carattere:\n");
            scanf("%c", &c);
        }
        else if ('A' <= c && c <= 'Z')
        {
            printf("%c e %d\n", c, c);
            printf("Inserisci un nuovo carattere:\n");
            scanf("%c", &c);
        }
        else
        {
            printf("Inserisci un carattere valido\n");
            scanf("%c", &c);
        }
    }
    
    
    
    
}


//bubble sort
#include <stdio.h>

int main (void)
{
    int voti[5] = {4, 7, 2, 10, -2}, scambio, i, b = 1;
    while (b) 
    {
        b = 0;
        for (i = 0; i < 4; i++)
        {
            if (voti[i] > voti[i + 1])
            {
                scambio = voti[i];
                voti[i] = voti[i + 1];
                voti[i + 1] = scambio;
                b = 1;
            }
        }
        
    }
    for (i = 0; i < 5; i++)
        printf("%d\n", voti[i]);
}


#include <stdio.h>


int main (void)
{
    int n, i, j, numeroInserito, fattoriale, totale = 0;
    fattoriale = 1;
    
    printf("Quanti numeri vuoi inserire?\n");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        printf("Inserisci un numero: \n");
        scanf("%d", &numeroInserito);
        for (j = numeroInserito; j > 1; j--)
            fattoriale = j * (j - 1);
        totale = totale + fattoriale;
    }
    printf("La somma dei fattoriali: %d\n", totale);
}


//sommatoria di base a da i = 0 a n
#include <stdio.h>
#include <math.h>

int main (void)
{
    int n, i;
   
    double a, somma;
    somma = 0.0;
    
    printf("Inserisci la base e il limite: \n");
    scanf("%lf %d", &a, &n);
    
    for (i = 0; i <= n; i++) {
        somma = somma + pow((double)a , (double) i);
    }
    printf("La sommatoria è: %d\n", (int)somma);
}


//somma di numeri fattoriali
#include <stdio.h>

int main (void)
{
    int n, k, somma, i, j, fattoriale;
    somma = 0;
    fattoriale = 1;
    
    printf("Quanti numeri vuoi sommare?\n");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("Inserisci un numero: \n");
        scanf("%d", &k);
        for (j = k; j >= 2; j--)
            fattoriale = fattoriale * j;
        somma = somma + fattoriale;
        fattoriale = 1;
    }
    printf("La somma dei fattoriali è: %d\n", somma);
}



//calcolo interesse 
#include <stdio.h>
#include <math.h>

int main (void)
{
    float capIniziale, capFinale;
    int anni, tInteresse, i;
    
    printf("Inserire Capitale Iniziale: \n");
    scanf("%f", &capIniziale);
    
    printf("Inserire tasso di Interesse: \n");
    scanf("%d", &tInteresse);
    
    printf("Inserire il numero di anni: \n");
    scanf("%d", &anni);
    
    for (i = 1; i <= anni; i++) 
    {
        capFinale = capIniziale * powf((1.0 + (float)tInteresse/100), i);
        if (i == 1)
            printf("Dopo %d anno: %.2f €\n", i, capFinale);
        else
            printf("Dopo %d anni: %.2f €\n", i, capFinale);
        
    }
}


#include <stdio.h>

int main (void)
{
    for (unsigned int i = 1; i <= 5; ++i)
    {
        for (unsigned int j = 1; j <= 3; ++j)
        {
            for (unsigned int k = 1; k <= 4; ++k)
            {
                printf("%s", "*");
            } puts("");
        }
        puts("");
    }
}


//Teorema di Pitagora
#include <stdio.h>
#include <math.h>

double hypotenuse (double x, double y);

int main (void)
{
    double lato1, lato2, hyp;
    printf("Inserisci i due cateti del triangolo: \n");
    scanf("%lf %lf", &lato1, &lato2);
    
    hyp = hypotenuse (lato1, lato2);
    printf("L'ipotenusa è %.3lf\n ", hyp);
    
}

double hypotenuse (double x, double y)
{
    return sqrt((pow(x, 2.0) + pow(y, 2.0)));
}



//Minore di tre numeri
#include <stdio.h>

double min (double x, double y, double z);

int main (void)
{
    double num1, num2, num3, minimo;
    printf("Inserisci tre numeri: \n");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    
    printf("Il più piccolo dei tre: %.2lf\n", minimo = min(num1,num2,num3));
}

double min (double x, double y, double z)
{
    if (x < y && x < z)
        return x;
    else if (y < x && y < z)
        return y;
    else
        return z;
}



#include <stdio.h>

void scambia (int* x, int* y);
int main (void)
{
    int y = 5; int x = 33;
    scambia(&y, &x);
    printf("Il valore di x e' %d, il valore di y e' %d\n", x, y);
}

void scambia(int* a, int* b)
{
    int t;
    t = *a; *a = *b; *b = t;
}


// Fig. 5.18: fig05_18.c
// Funzione fattoriale ricorsiva.
#include <stdio.h>

unsigned long long int fattoriale (unsigned int x);

int main (void)
{
    for (unsigned int i = 0; i <= 21; i++) {
        printf("%u! = %llu\n", i, fattoriale(i));
    }
}

unsigned long long int fattoriale (unsigned int x)
{
    unsigned long long int y;
    if (x <= 1)
        return y = 1;
    else
        return y = (x * fattoriale(x-1));
    
    
}


//Massimo Comune Divisore
#include <stdio.h>

int gcd (int x, int y);

int main (void)
{
    int num1, num2;
    printf("Inserisci due numeri interi: \n");
    scanf("%d %d", &num1, &num2);
    
    printf("Il Massimo Comune Divisore è: %d\n", gcd(num1, num2));
}

int gcd (int x, int y)
{
    if (y == 0) {
        return x;
    }
    else
        return gcd(y, x % y);
}


// Calcolo Distanza tra due Punti
#include <stdio.h>
#include <math.h>

double distance (double x1, double x2, double y1, double y2);

int main (void)
{
    double x1, x2, y1, y2;
    printf("Inserisci le coordinate del punto 1 (x1, y1): \n");
    scanf("%lf %lf", &x1, &y1);
    printf("Inserisci le coordinate del punto 2 (x1, y1): \n");
    scanf("%lf %lf", &x2, &y2);
    
    printf("La distanza tra il punto 1 e il punto 2: %.2lf\n", distance(x1, x2, y1, y2));
}

double distance (double x1, double x2, double y1, double y2)
{
    return sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
}


#include <stdio.h>


int main (void)
{
    int c[5], i, j;
    

        
        for (i=0; i<5; i++)
        {
            c[i] = 0;
            printf("%d%7d\n", i, c[i]);
        }
    
  
}


#include <stdio.h>

int isPrimo (int x)
{
    int i, result = 1;
    if (x <= 1)
        result = 0;
    else
    {
        for (i = 2; i < x; i++)
        {
            if (x % i == 0) 
            {
                result = 0;
            }
        }
    }
        
    return result;
}

int main (void)
{
    int N, i;
    printf("Inserisci numero: \n");
    scanf("%d", &N);
    for (i = 0; i <= N; i++)
    {
        if (isPrimo(i))
            printf("%d\n", i);
    }
    return 0;
}

//Terne Pitagoriche fino ad un limite
#include <stdio.h>

int min(int x, int y)
{
    if (x > y)
        return y;
    else
        return x;
}

int terna(int a,int b,int c)
{
    int cateto1, cateto2, ipo, prod;
    cateto1 = min(a, b);
    cateto2 = min(a + b - cateto1, c);
    ipo = a + b + c - cateto1 - cateto2;
    prod = (cateto1*cateto1) + (cateto2*cateto2);
    
    if (prod == ipo*ipo)
        return 1;
    else
        return 0;
}

int main (void)
{
    int N, i, j, k;
    
    printf("Inserisci numero: \n");
    scanf("%d", &N);
    for (i = 1; i <= N; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            for (k = 1; k <= j; k++) 
            {
                if (terna(i, j, k)) 
                {
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    
}


//Inserire e stampare il massimo tra le variabili di un Array
#include <stdio.h>

int main (void)
{
    int N, n, max = 0, i, j, k;
    printf("Quanti numeri vuoi inserire nel vettore?\n");
    scanf("%d", &N);
    int c[N];
    for (j = 0; j < N; j++) {
        printf("Inserisci il numero: \n");
        scanf("%d", &n);
        c[j] = n;
    }
    for (k = 0; k < N; k++) {
        printf("%d\t", c[k]);
    }
    printf("\n");
    for (i = 1; i < N; i++) {
        if (max < c[i]) {
            max = c[i];
        }
    }
    printf("%d\n", max);
}
*/

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

