#include <stdio.h>
#include <stdbool.h> // this for using boolean vriables

// in this lession i learn about variables
/*
 int = for number like : 4 2 42
 float = for decimal numbers like : 19.5
 char = for single characters like : 'a'
 char[] = for strings like : "test"
 bool = for boolean values like : true or false requires <stdbool.h> library
 */
int main() {



    // this is exemple for integer variables
    int age = 25;
    printf("your age %d yours old\n", age);



    // this is exemple for float number variables
    float grade = 19.5;
    printf("i got %.1f in culture numerique\n", grade);



    // this is exemple for char variables it gave just one character
    // if you want to write the all phrase is to add to the char name[] = "test";
    char name[] = "anass lamghari";
    printf("your name is %s\n", name);

    // this is exemple for boolean variables
    bool compare = 12 < 10;
    printf("%d\n",compare);

    if(compare) {
        printf("yes it correct \n");
    }
    else {
        printf(" nop is not correct\n");
    }

    return 0;
}
