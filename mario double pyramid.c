#include<stdio.h>
#include<cs50.h>

int main()
{
    int n, i, j;
    
    //enter height
    do
    {
        n = get_int("height: ");
    }
    while (n > 8 || n < 1);
    
    //print pyramid
    for (i = 0 ; i < n ; ++i)
    {   
        //for spaces
        for (j = n - 1 ; j > i ; j--)
        
        {
            printf(" ");
            
        }
        
        //for ## pyramid
        for (int k = 0 ; k <= i ; k++)
        {
            printf("#");
        }
        
        //for space between
        for (int l = 0 ; l < 2 ; ++l)
        {
            printf(" ");
        }
        
        //for next pyramid
        for (int m = 0 ; m <= i ; m++)
        {
            printf("#");
        }
        
        //to provide new line
        printf("\n");
    }
    
}
