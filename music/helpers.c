// Helper functions for music

#include <cs50.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths

 // TODO - implement duration
    //take in a fraction as a string
    //examples: "1/8", "1/4", "3/8"

    //assume numnerator and denominator are each one digit

    //assume that the fraction works out to a
    //whole number of eighth notes

int duration(string fraction)
{
int numerator = fraction[0] - '0';

int denominator = fraction[2] - '0';

//TODO - Cases in which numerator is NOT 1
return 8.0 / denominator;

}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{

    // TODO
    //parse the string into a note and its octave
    //calculate the frequency of the note in the given octave
    //return thee frequency (nteger value)
}

//A4 is 440 Hz "440 * 2 1/12 = 466"
//For every semitone up we move, we multiply the freq by 2 1/12
//For every semitone down we move, we divide the frequency by 2 1/12

// Determines whether a string represents a rest
bool is_rest(string s)
{
    //checks for empty string
    //if s represents a rest, returns true;
    //otherwise, returns false

    if (s[0] == "\0")
    {
        // printf("true");
        return true;
    }
    else
    {
        // printf("false");
        return false;
    }
    //remember how we represent rest using our notation
}
