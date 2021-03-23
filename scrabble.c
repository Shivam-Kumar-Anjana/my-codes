#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
//char arr[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    
    
    // printf("score1 : %d\n", score1);
    //printf("score2 : %d\n", score2);
    // TODO: Print the winner
    
    if (score1 > score2)
    {
        printf("Player 1 wins !");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins !");
    }
      
    else
    {
        printf("tie");
    }
    return 0;
}

int compute_score(string word)
{
    int total = 0;
   
    for (int i = 0 ; word[i] != '\0' ; i++)
    {   
        char c = word[i];
        c = tolower(c);
        if (isalpha(c))
        {
            total += POINTS[c - 'a'];
        }
        //printf("%i",total);
    }
    return total;
}
