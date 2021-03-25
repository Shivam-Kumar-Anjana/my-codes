#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


//int agrcv(int argc, string argv[]);


int main(int argc, string argv[])
{  
    int X = argc;
    string Y = argv[1];
    if (X != 2)
    {
        printf("Usage: ./caesar key");
        return 1;
        exit(0);
    }
    else if (isalpha(*Y))
    {
        printf("Usage: ./caesar key");
        return 1;
        exit(0);
    }
    
    int key = atoi(argv[1]);
    // printf("%d",key);
    
    string text;
    text = get_string("Plaintext: ");
    
    //string c=0;
    printf("Ciphertext: ");
    for (int i = 0; i <= strlen(text); i++)
    { 
        char  c = text[i];
        
        if (islower(c))
        {
            printf("%c", (c + key - 'a') % 26 + 'a');
        }
        
        if (isupper(c))
        {
            printf("%c", (c + key - 'A') % 26 + 'A');
        }
        
        if (isspace(c))
        {
            printf(" ");
        }
        //else printf("%c",c);
        
        if (ispunct(c))
        {
            printf("%c", c);
        }
        // printf("\n");*/
    }
    printf("\n");
    return 0;
}


//int agrcv(int argc, string argv[])
//{
   
//}
