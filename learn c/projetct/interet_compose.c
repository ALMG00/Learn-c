#include <stdio.h>
#include <math.h>

int main() {
    double capital = 0.0;
    double taux = 0.0;
    double duree = 0.0;
    double capital_aquice = 0.0;

    printf("entry le capital initial : ");
    scanf("%lf", &capital);

    printf("entry le taux : ");
    scanf("%lf", &taux);
    taux = taux / 100.0;

    printf("entry la duree (Annee): ");
    scanf("%lf", &duree);

    capital_aquice = capital * pow(1 + taux, duree);
    printf("le capital aquise est : %.2f", capital_aquice);


    return 0;
}
