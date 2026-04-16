#include <stdio.h>

int main() {
    float produit = 0.0f;
    double charge = 0.0f;
    float total = 0.0f;

    printf("to calcul your result !!\n");
    printf("enter your produit : ");
    scanf("%f", &produit);

    printf("enter your charge : ");
    scanf("%lf", &charge);

    total = produit - charge;
    printf("your toal is : %.2f", total);



    return 0;
}
