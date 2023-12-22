#include <stdio.h>

int main(void) {
   char name[50];

   printf("What's your name? ");
   fgets(name, 50, stdin);  

   name[strcspn(name, "\n")] = '\0';

   printf("hello, %s\n", name);
}
