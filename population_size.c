#include <stdio.h>

int main(void) {
   // Prompt for start size
   int start_size;
   do {
       printf("Enter the start population size (must be at least 9): ");
       scanf("%i", &start_size);
   } while (start_size < 9);

   // Prompt for end size
   int end_size;
   do {
       printf("Enter the end population size (must be greater than the start size): ");
       scanf("%i", &end_size);
   } while (end_size < start_size);

   // Calculate number of years until we reach threshold
   int years = 0;
   while (start_size < end_size) {
       start_size += (start_size / 3) - (start_size / 4);
       years++;
   }

   // Print number of years
   printf("Years: %i\n", years);
}
