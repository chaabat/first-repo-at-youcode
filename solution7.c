#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nombre, inverse;


    printf("Entrez un nombre entier à trois chiffres : ");
    scanf("%d", &nombre);


    if (nombre < 100 || nombre > 999) {
        printf("Veuillez entrer un nombre à trois chiffres.\n");
        return 1;
    }


    inverse = (nombre % 10) * 100 + ((nombre / 10) % 10) * 10 + (nombre / 100);


    printf("L'inverse du nombre est : %d\n", inverse);


    return 0;
}
