#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 0;
    do
    {
        n = get_int("Height of the pyramid 1 to 8?\n");
    } while ( (n < 1) || (n > 8) );
    for (int i = n - 1; i >= 0; i--)
    {
        for (int a = 0; a < n; a++)
        {
            if (a >= i)
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
}