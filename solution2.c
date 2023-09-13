#include <stdio.h>
#include <stdlib.h>

int main()
{
    double C,F;
    char* sensation ;
    printf(" veuillez entrer la temperature en  Fahrenheit: ") ;
    scanf("%lf",&F);
    C = (F-32)/1.8 ;
    if
        (C<0) {
          sensation = "Très froid";
    } else if (C >= 0 && C < 10) {
        sensation = "Froid";
    } else if (C >= 10 && C < 20) {
        sensation = "Chaud";
    } else {
        sensation = "Très chaud";
    }
     printf("La température en Celsius est : %.2lf °C \n", C);
    printf("Sensation ressentie : %s\n", sensation);
    return 0;
}
