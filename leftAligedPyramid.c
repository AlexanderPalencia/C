#include <cs50.h>
#include <stdio.h>


"""
Height: 8
#
##
###
####
#####
######
#######
########
"""

int main(void)
{
    int n = 0;
    do
    {
        n = get_int("Height of the pyramid 1 to 8?\n");
    } while ( (n < 1) || (n > 8) );
    for (int i = 0; i <= n -1; i++)
    {
        for (int a = 0; a <= i; a++)
        {
            printf("#");
        }
        printf("\n");
    }
}