#include <stdio.h>

int main() {
    printf("this is program that convert kilo to pound!!!\n");

    int choice = 0;

    float kilo = 0.0f;
    float pound = 0.0f;
    // now i will ask the user for gave his choice to chose between kilo or pound
    printf("Enter 1 to convert kilo to pound or 2 to convert pound to kilo: \n");
    printf("1) kilo to pound\n");
    printf("2) pound to kilo\n");
    scanf("%d", &choice);
    // depending on the choice, the user will enter either kilo or pound value
    if(choice == 1){
        printf("Enter the kilo value: ");
        scanf("%f", &kilo);
        pound = kilo * 2.20462;
        printf("%.2f kilo is equal to %.2f pound\n", kilo, pound);
    } else if(choice == 2){
        printf("Enter the pound value: ");
        scanf("%f", &pound);
        kilo = pound / 2.20462;
        printf("%.2f pound is equal to %.2f kilo\n", pound, kilo);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
