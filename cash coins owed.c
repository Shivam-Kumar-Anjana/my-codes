#include<stdio.h>
#include<math.h>
#include<cs50.h>

int main()
{
    float dollargiven;
    int cent, quater, dime, nickel, penny, owedcoin;
    
    do
    {
        dollargiven = get_float("amount owed: $");
    }
    while (dollargiven < 0);
    
    cent = round(dollargiven * 100);
    
    // printf("cent %d\n", cent);
    
    quater = cent / 25;
    //printf("quater %d\n", quater);
    
    dime = (cent - (quater * 25)) / 10;
    //printf("dime %d\n", dime);
    
    nickel = (cent - dime * 10 - quater * 25) / 5;
    //printf("nickel %d\n", nickel);
    
    penny = (cent - dime * 10 - quater * 25 - nickel * 5);
    //printf("penny %d\n", penny);
    
    printf("change owed: %d", quater + dime + nickel + penny);
    
}
