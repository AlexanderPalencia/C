#include <stdio.h>
#include <cs50.h>
#include <math.h>

"""
 The problem to be solved is to decide which coins and how many of each to hand to the customer. Think of a “greedy” cashier as one who wants to take the biggest bite out of this problem as possible with each coin they take out of the drawer. 
When making change, odds are you want to minimize the number of coins you’re
"""

int main(void)
{
    float change;
    int cents;
    int coins[4] = {25, 10, 5, 1};
    // asking float
    do
    {
        change = get_float("Change owed:");
    }
    while (change <= 0);

    // Initializing variables
    cents = round(change * 100);
    int i = 0;
    float r;
    int total = 0;

    // While change is not 0
    while (cents != 0 && cents > 0)
    {
        r = cents / coins[i];
        cents = cents - (r * coins[i]);
        total += r;
        i++;
    }
    printf("%i\n", total);


}