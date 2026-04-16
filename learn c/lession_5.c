#include <stdio.h>

int main() {
    int age = 0;
    float height = 0.0f;
    char grade = '\0';
    char name[50] = "";

    printf("enter your age : ");
    scanf("%d", &age);

    printf("enter your height : ");
    scanf("%f", &height);

    printf("enter your grade : ");
    scanf(" %c", &grade);

    getchar();
    printf("enter your name : ");
    fgets(name, sizeof(name), stdin);


    printf("%d\n", age);
    printf("%.2f\n", height);
    printf("%c2\n", grade);
    printf("%s", name);
    return 0;
}
