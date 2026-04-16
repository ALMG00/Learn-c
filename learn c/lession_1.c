#include <stdio.h>
#include <stdbool.h>


// this is communt for one lin/
/*
 this is cumment
 for more then
 one line
 */
//#define MergingName(str, strplus) str##strplus
int maxnum(int a, int b){
    if (a > b){
        return a;
    } else {
        return b;
    }
}
int main(){
    int a = 5;
    int b = 3;
    int max = maxnum(a, b);
    printf("max = %d\n", max);

   // logical operater's AND OR NOT
   // int x = 1;
   // x = x | 2;
   // printf("x = %d\n", x); // this for OR
   // int y = 1;
   // y = y & 4;
   // printf("y = %d\n", y); // this for AND
   // int z = 5;
   // z = z & 4;
   // printf("z = %d\n", z); // this for XOR


    // EXEMPLE HOW YOU CAN USE #DEFINE
    // char MergingName(ch, 1) = 'H';
    // char MergingName(ch, 2) = 'e';
    // char MergingName(ch, 3) = 'l';
    // char MergingName(ch, 4) = 'l';
    // char MergingName(ch, 5) = 'o';
    // printf("%c%c%c%c%c\n", ch1, ch2, ch3, ch4, ch5);

    // LOGICAL OPERATORS
    // printf("%d\n", 5 < 3 && 5 > 3);
    // printf("%d\n", 5 == 3 && 5 == 3);
    // printf("%d\n", 5 > 3 && 5 < 3);

    // printf("%d\n", 5 < 3 || 5 > 3);
    // printf("%d\n", 5 == 3 || 5 == 3);
    // printf("%d\n", 5 > 3 || 5 < 3);

    // printf("%d\n", !(5 < 3));
    // printf("%d\n", !(5 == 3));
    // printf("%d\n", !(5 > 3));
    // printf("%d\n", 1<<7);
    // printf("%d\n", 128>>7);
    // char week_day = '\0';
    // printf("enter your week day chose (M, T, W, T, F, S, S): ");
    // scanf("%c", &week_day);
    // switch (week_day) {
        // case 'M':
            // printf("Monday\n");
            // break;
        // case 'T':
            // printf("Tuesday\n");
            // break;
        // case 'W':
            // printf("Wednesday\n");
            // break;
        // case 'F':
            // printf("Friday\n");
            // break;
        // case 'S':
            // printf("Saturday\n");
            // break;
        // default:
            // printf("Invalid input try to chose from (M, T, W, T, F, S, S)\n");
            // break;
    // }


    return 0;
}
