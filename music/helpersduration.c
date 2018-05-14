// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <stdio.h>



#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
// int duration(string fraction)

int main(void)

   {
    string dur = get_string("enter a fraction:\n ");

    // TODO - implement duration
    //take in a fraction as a string
    //examples: "1/8", "1/4", "3/8"

    //assume numnerator and denominator are each one digit

    //assume that the fraction works out to a
    //whole number of eighth notes

    // int dur = GetInt(string fraction);
int num = 10;
    switch (dur[2])
    {
    case 1:
        printf(num * 4 "\n");
        break;
    case 2:
        printf(num * 2 "\n");
        break;
    default:
        printf(num "\n");
    }

}
