#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float rayon, circonference;


    printf("Entrez le rayon du cercle : ");
    scanf("%f", &rayon);


    circonference = 2 * M_PI * rayon;


    printf("La circonference du cercle est : %.2lf\n", circonference);


    return 0;
}
