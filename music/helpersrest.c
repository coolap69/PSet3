// Helper functions for music

#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include "helpers.h"

int main(void)
{

    string s = get_string("enter a fraction:\n ");

// Determines whether a string represents a rest

    // TODO - implement is_rest

    // if s represents a rest, returns true;
    //otherwise, retu2rns false
// string empty = "";

// int compare = strcmp(s, empty);

    if (s[0] == "\0")
    //  if (compare == 0)
    {
        printf("true");
        return true;
    }
    else
    {
        printf("false");
        return false;
    }
    //remember how we represent rest using our notation
}