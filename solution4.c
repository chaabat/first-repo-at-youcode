#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d;
    float somme, moyenne;


    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);

    printf("Entrez le troisième nombre : ");
    scanf("%f", &c);

    printf("Entrez le quatrième nombre : ");
    scanf("%f", &d);


    somme = a + b + c + d;


    moyenne = somme / 4;


    printf("La somme des nombres est : %.2lf\n", somme);
    printf("La moyenne des nombres est : %.2lf\n", moyenne);
    return 0;
}
