// Helper functions for music

#include <cs50.h>
#include <string.h>


#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)

    // TODO - implement duration
    //take in a fraction as a string
    //examples: "1/8", "1/4", "3/8"

    //assume numnerator and denominator are each one digit

    //assume that the fraction works out to a
    //whole number of eighth notes

    int dur = GetInt(string fraction);

    switch (dur[2])
    {
    case 1:
        printf(num * 4"\n");
        break;
    case 2:
        printf(num * 2"\n");
        break;
    default:
        printf(num"\n");
    }

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO - implement frequency
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    // TODO - implement is_rest
    // if s represents a rest, returns true;
    //otherwise, returns false
string empty = "";

int compare = strcmp(s, empty);

    // if (s == "\0")
     if (compare == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

    //remember how we represent rest using our notation
}
