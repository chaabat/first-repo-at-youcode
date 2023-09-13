#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    float division, reste;


    printf("Entrez la valeur de a : ");
    scanf("%d", &a);

    printf("Entrez la valeur de b : ");
    scanf("%d", &b);


    int somme = a + b;
    int difference = a - b;
    int produit = a * b;


    if (b != 0) {
        division = (float)a / b;
        reste = a % b;
    } else {
        printf("Erreur : division par zéro impossible.\n");
        return 1;
    }


    printf("a + b = %d\n", somme);
    printf("a - b = %d\n", difference);
    printf("a * b = %d\n", produit);
    printf("a / b = %.2f\n", division);
    printf("a %% b = %.2f\n", reste);
    return 0;
}
