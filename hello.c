#include "cs50.h"
#include <stdio.h>

int main(void)
{
   //assigning string
   string name = get_string("What is your name? \n");

   //printing string to terminal
   printf("Hello, %s\n", name);
}