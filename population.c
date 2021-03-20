#include <cs50.h>
#include <stdio.h>

int main(void)
{    
    int start, end;
    // TODO: Prompt for start size
    
    do
    {
        start = get_int("Start size: \n");
    }
    while (start < 9);
    
    // TODO: Prompt for end size
    
    do
    {
        end = get_int("End size: \n");
    }
    while (end < start);
    
    
    // TODO: Calculate number of years until we reach threshold
    
    int total = start;
    
    int time = 0;
    
    for (total = start; total < end; time++)
    {   
        if (start != end)
        {
            total = (float)total + (float)(total / 3) - (float)(total / 4);
        }
        else if (start == end)
        {
            break;
        }
    }

    // TODO: Print number of years
    
    printf("Years: %d", time);
}

