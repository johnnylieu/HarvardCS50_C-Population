#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        // I like to give users specific instructions hence the instructions in the paranthesis, hashtag OCD lol
        start = get_int("Starting llama population (must be 9 or greater): ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("Ending llama population (must be greater than start population): ");
    }
    while (end < start);

    // TODO: Calculate number of years until we reach threshold
    
    int years = 0;
    while (start < end)
    {
        start = start + (start / 3) - (start / 4);    
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);
}