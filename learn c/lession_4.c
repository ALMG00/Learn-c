#include <stdio.h>

/*
 * operation arethmetiques on (+ , - , * , / , % , ++ , --)
 */


int main() {
   int a = 10;
   int b = 2;
   int c = 0;

   c = a + b;
   printf("%d\n",c);

   c = a - b;
   printf("%d\n",c);

   c = a * b;
   printf("%d\n",c);

   c = a / b;
   printf("%d\n",c);

   c = a % b;
   printf("%d\n",c);

   c++;
   printf("%d\n",c);

   c--;
   printf("%d\n",c);


    return 0;
}
