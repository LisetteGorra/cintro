#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    string firstname = get_string("What is your first name? ");
    string lastname = get_string("What is your last name? ");
    printf("Hello Mr/Ms %s, %s\n", lastname, firstname);
    // string firstname = get_string("What is your first name? ");
    // string lastname = get_string("What is your last name? ");
    // printf("Hello Mr/Ms %s, %s\n", lastname, firstname);

    // int myNum = 36;
    int  myFloat = round(3.87 * 100);
    int other = round(1.52*100);
    int total = myFloat + other;
    int cents = total % 100;
    int dollars = total /100;
    printf("adding the numbers: %i.%i\n", dollars, cents);

    float division = (float)78/15;
    printf("the division: %.2f\n", division);

}