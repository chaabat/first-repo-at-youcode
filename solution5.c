#include <stdio.h>
#include <stdlib.h>

int main()
{
     float x1, y1, x2, y2;
    float distance;


    printf("Entrez les coordonn�es du premier point (x1 y1) : ");
    scanf("%f %f", &x1, &y1);

    printf("Entrez les coordonn�es du deuxi�me point (x2 y2) : ");
    scanf("%f %f", &x2, &y2);


    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));


    printf("La distance entre les deux points est : %.2f\n", distance);
    return 0;
}
