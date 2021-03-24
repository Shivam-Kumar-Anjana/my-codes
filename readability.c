#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

//functions for calculation of letter word and sentence
int count_letters(string sentence);
int count_sentence(string sentence);
int count_word(string sentence);
int main()
{
    string sentence;
    sentence = get_string("Text: ");
    float let = count_letters(sentence);
    float sen = count_sentence(sentence);
    float wor = count_word(sentence);
    
    float avgs, avgl;
    
    avgs = (sen / wor) * 100;
    avgl = (let / wor) * 100;
    
    //printf("%f\n",avgs);
    //printf("%f\n",avgl);
    
    float index = 0.0588 * avgl - 0.296 * avgs - 15.8;
    
    //printf("index: %f\n", index);
    
    if (index < 0)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
    return 0;
}

//letter counter
int count_letters(string sentence)
{
    int total = 0;
   
    for (int i = 0 ; sentence[i] != '\0' ; i++)
    {   
        char c = sentence[i];
        // c = tolower(c);
        if (isalpha(c))
        {
            total += 1;
        }
        //printf("%i",total);
    }
    return total;
}

//word counter
int count_word(string sentence)
{
    int total = 1;
   
    for (int i = 0 ; sentence[i] != '\0' ; i++)
    {   
        char c = sentence[i];
        if (isspace(c))
        {
            total += 1;
        }
    }
    return total;
}

//sentence counter
int count_sentence(string sentence)
{
    int total = 0;
   
    for (int i = 0 ; sentence[i] != '\0' ; i++)
    {   
        char c = sentence[i];
        if (c == '?' || c == '!' || c == '.')
        {
            total += 1;
        }
    }
    return total;
}
