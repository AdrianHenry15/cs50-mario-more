#include <stdio.h>

int main(void)
{
    // height, row, column, space
   /*
       #  #
      ##  ##
     ###  ###
    ####  ####

   */

   int height, row, column, space;
   do
   {
    //get height from user
        printf("Enter Height Here: ");
        scanf("%d", &height);
   }
   while (height < 1 || height > 8);

   for (row = 0; row < height; row++)
   {
        for (space = 0; space < height - row - 1; space++)
        {
            //space to add pyramid angle
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        //space between pyramids
        printf("  ");
        for (column = 0; column <= row; column++)
        {
            //the actual building blocks for the pyramid
            printf("#");
        }
        // new line for building blocks to print out
        printf("\n");
   }
}