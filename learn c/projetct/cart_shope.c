#include <stdio.h>
#include <string.h>

int main() {
    printf("wellcome to our chope !!! \n");


   char item_name[50] = "";
   float item_price = 0.0f;
   char cerrancy = '$';
   int quantity = 0;
   float total = 0.0f;


   printf("enter your item name plss : ");
   fgets(item_name, sizeof(item_name), stdin);
   item_name[strlen(item_name) - 1] = '\0';

   printf("enter your qyantity you buying : ");
   scanf("%d", &quantity);

   printf("enter the price of item : ");
   scanf("%f", &item_price);
   //getchar("%c", &cerrancy);


   total = quantity * item_price;

   printf("your item name : %s\n", item_name);
   printf("your item price : %.2f\n", item_price);
   printf("your total is : %.2f", total);
   printf("%c", cerrancy);

    return 0;
}
