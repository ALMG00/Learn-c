#include <stdio.h>

/*
Format specifier = Special tokens that begin with a "%" symbol,
                   followed by a character that specifies the data type and optional modifiers (width, precision, flags).
                   they control how data is diplayed or interpreted.
 */



int main() {
    int age = 20;
    printf("i have %+.d years old \n", age);

    float height = 178;
    printf("my tool is %.0f cm\n", height);

    double weight = 78.98; // double is like float kat9der thded mch5al mne ra9me i9der ikone wra lfasila
    printf("my weight is %.2f\n", weight);

    char grade = 'A';
    printf("my grade is %c\n", grade);

    char name[] = "anass lamgahri";
    printf("my name is %s\n", name);

    return 0;
}
