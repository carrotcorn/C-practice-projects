#include <cs50.h>
#include <stdio.h>

int main(void)
{
   //Determine how long it takes for a population to reach a particular size
   int startN;
   int endN;
   int years;
   // Prompt for start size thats larger than 9, if less, re prompts user
   do
   {
      startN = get_int("Start size: ");
   } while (startN < 9);

   // Prompt for end size
   do
   {
      endN = get_int("End size: ");
   } while (endN < startN);

   // Calculate number of years passed
   years = 0;
   int population = startN;

   if (startN != endN)
   {
       do
       {
           population = population + population / 3 - population / 4;
           years++;
       }
       while (population < endN);
   }
   // while (startN < endN)
   // {
   //    startN = startN + (startN / 3) - (startN / 4);
   //    years++;
   // }

   printf("Years: %i\n", years);
}