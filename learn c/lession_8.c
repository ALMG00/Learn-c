#include <stdio.h>
#include <math.h>

int main() {
    double redius = 0.0;
    double area = 0.0;
    double surface = 0.0;
    const double PI = 3.14159265358979323846;

    printf("enter your redius : ");
    scanf("%lf", &redius);

    area = PI * redius * redius;
    surface = 4 * PI * redius * redius;

    printf("the area is : %.3lf\n", area);
    printf("the surface area is : %.2lf\n", surface);


    return 0;
}
