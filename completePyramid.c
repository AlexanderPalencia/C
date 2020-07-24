#include <cs50.h>
#include <stdio.h>

"""
Height: 8
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########
"""

int main(void)
{

    // initializing int variable
    int n = 0;
    // input of user must be between 1 and 8
    do
    {
        n = get_int("Height of the pyramid 1 to 8?\n");
    }
    while ((n < 1) || (n > 8));
    // First loop is for the height
    int columns = (n * 2) + 2;
    for (int i = n - 1; i >= 0; i--)
    {

        for (int a = 0; a < columns; a++)
        {
            // Midle spaces
            if (a == n || a == n + 1)
            {
                printf(" ");
            }
            // right pyramid
            else if (a >= i && a < n)
            {
                printf("#");
            }
            // left pyramid
            else if (a > n + 1 && a < columns - i)
            {
                printf("#");
            }
            else if (a >= columns - i)
            {
                continue;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}