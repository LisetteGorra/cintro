//requiring standard input output library for use of print f
#include <cs50.h>
#include <stdio.h>


void printSum(void);
void printSums(int , int);

int main(void)
{
    //print format with new line symbol
    printf("hello\n");
    printSums(4, 8);
}
void printSum(void)

{
    printf("1 + 2 = %i\n", 1 + 2);
}
void printSums(int x, int y)
{
    printf("%i + %i = %i\n", x, y, x + y);
}